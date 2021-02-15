#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans = abs(a[0]-a[n-1])+ abs(a[1]-a[n-1]) +abs(a[0]-a[1]);
    cout<<ans<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
       long long t;
       cin>>t;
       while(t--){
        solve();
       }
    return 0;
}
