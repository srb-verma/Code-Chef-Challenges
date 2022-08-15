#include <bits/stdc++.h>

#define loopForRow(i,n) for(int i = 0; i < n; i++)
#define loopForCol(j,m) for(int j = 0; j < m; j++)
#define ll long long 

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int t;
	cin>>t;
	
	while(t--) {
	    int m, n;
	    cin>>n>>m;
	    
	    vector<vector<ll>> vect1(n, vector<ll> (m));
	    vector<vector<ll>> vect2(n, vector<ll> (m));
	    
	    bool ans = true;
	    
	    if(n == 1 || m == 1) {
	        int num;
	        loopForRow(i, n) {
	            loopForCol(j, m) {
	                cin>>vect1[i][j];
	            }
	        }
	        
	        loopForRow(i, n) {
	            loopForCol(j, m) {
	                cin>>vect2[i][j];
	            }
	        }	
	        
	        loopForRow(i, n) {
	            loopForCol(j, m) {
	                if(vect1[i][j] != vect2[i][j]) {
	                    ans = false;
	                    break;
	                }
	            }
	        }		        
	    } else {
	        map<ll , ll> vect11, vect12, vect21, vect22;
	        int num; 
	        loopForRow(i, n) {
	            loopForCol(j, m) {
	                cin>>num;
	                if((i + j) & 1 != 0) {
	                    vect11[num]++;
	                } else {
	                    vect12[num]++;
	                }
	            }
	        }
	        
	        loopForRow(i, n) {
	            loopForCol(j, m) {
	                cin>>num;
	                if((i + j) & 1 != 0) {
	                    vect21[num]++;
	                } else {
	                    vect22[num]++;
	                }
	            }
	        }	        
	        
	        for (auto it : vect11) {
	            if(it.second != vect21[it.first]) {
	                ans = false;
	                break;
	            }
	        }
	        
	        for (auto it : vect12) {
	            if(it.second != vect22[it.first]) {
	                ans = false;
	                break;
	            }
	        }	
	        
	    }
	    
        if (ans) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }	    
	    
	}
	return 0;
}
