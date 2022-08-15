#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int n; 
	    cin>>n;
	    
	    vector<int> vect(n - 1);
	    for(int i = 0 ; i < n - 1 ; i++) {
	        cin>>vect[i];
	    }
	    
	    vector<int> A(n, 0), B(n, 0);
	    int diff = 0;
	    for(int i = 1; i < n ; i++) {
	        A[i] = A[i - 1] + vect[i - 1];
	        diff = A[i] - B[i - 1];
	        
	        if(diff > 0) {
	            B[i] = B[i - 1] + diff + vect[i - 1];
	        } else {
	            B[i] = B[i - 1] + vect[i - 1];
	        }
	    }
	    cout<<B[n - 1]<<endl;
	}
	
	return 0;
}
