#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int x;
    cin>>x;
    cout<<(x+4)/5;
    //cout<<x/5 +(x%5 ? 1:0); also works
}
signed main()
{
   fast
   int t=1;
    // cin>>t;
   while(t--){
        solve();
   }    
    return 0;
}
