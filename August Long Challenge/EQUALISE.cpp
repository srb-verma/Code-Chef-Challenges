#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b;
	    cin>>a>>b;
	    
	    if(a == b) {
	        cout<<"YES"<<endl;
	        continue;
	    }
	    
	    bool ans = false;
	    if(a > b) {
	        while(b < a) {
	            b*=2;
	            if(b == a) {
	                ans = true;
	                break;
	            }
	        }
	    } else {
	        while(b > a) {
	            a*=2;
	            if(b == a) {
	                ans = true;
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
