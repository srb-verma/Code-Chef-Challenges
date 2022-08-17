#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    
    n += m - 2 + a;
    a += b;
    
    if(n % 2 == 1 && a % 2 == 0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
	return 0;
}
