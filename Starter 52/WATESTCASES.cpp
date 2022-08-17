#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        
        vector<int> vect(n);
        for(int i = 0 ; i < n ; i++) {
            cin>>vect[i];
        }
        
        string v;
        cin>>v;
        
        int ans = INT_MAX;
        for(int i = 0 ; i < n ; i++) {
            if(v[i] == '0' && ans > vect[i]) {
                ans = vect[i];
            } 
        }
        
        cout<<ans<<endl;
    }
    
	return 0;
}
