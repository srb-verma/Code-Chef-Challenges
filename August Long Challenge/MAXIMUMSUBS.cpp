#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int x;
	    cin>>x;
	    
	    cout<<(((x*60) - 5) / 30) + 1<<endl;
	}
	return 0;
}
