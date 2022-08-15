#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    long long n,x,y;
	    cin>>n>>x>>y;
	    
	    vector<long long> vect(n);
	    for(int i=0;i<n;i++){
	       cin>>vect[i]; 
	    }
	    
	    priority_queue<long long,vector<long long>,greater<long long>> pq;
	    
	    for(auto it : vect){
	        pq.push(it);
	    }
	    
	    while(y > 0) {
	        long long mn=pq.top();
	        if((mn^x)>mn){
	            pq.pop();
	            pq.push(mn^x);
	            y--;
	        } else {
	            if ( (y & 1) == 0) break;
	            else {
	                pq.pop();
	                pq.push(mn^x);
	                break;
	            }
	        }
	    }
	    int cont=0;
	    while(!pq.empty()){
	        vect[cont]=pq.top();
	        pq.pop();
	        cont++;
	    }
	    for(auto it : vect){
	        cout<<it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}