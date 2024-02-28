#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
    ll a,b;
    cin>>a>>b;
    if(b==1){
           cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
        cout<<a<<" "<<a*b<<" "<<a*(b+1)<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}