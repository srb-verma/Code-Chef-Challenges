#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    long int x;
	    cin>>x;
	    
	    bool ans = false;
	    for(int i = 1 ; i * i <= x ; i++) {
	        if((x - 2 * i) % (i + 2) == 0 && x != 2*i) {
	            ans = true;
	            break;
	        }
	    }
	    
	    if(ans) {
	        cout<<"YES"<<endl;
	    } else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
