#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int n;
        cin>>n;
        
        vector<long long int> vect(n);
        for(int i = 0 ; i < n ; i++) {
            cin>>vect[i];
        }
        
        long long int min_gcd = INT_MAX;
        
        for(int i = 0 ; i < n - 1 ; i++) {
            long long int gcd = __gcd(vect[i], vect[i+1]);
            if(gcd < min_gcd) min_gcd = gcd;
        }
        
        cout<<min_gcd*n<<endl;
    }
    
	return 0;
}
