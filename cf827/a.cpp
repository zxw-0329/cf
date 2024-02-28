#include<bits/stdc++.h>
using namespace std;//格式化shift+alt+f
using ll = long long;
void solve() {
     int a,b,c;
     cin>>a>>b>>c;
     if(a+b==c||a+c==b||b+c==a){
        cout<<"YES\n";
     }
     else cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}