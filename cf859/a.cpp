#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
void solve() {
     int a,b,c;
     cin>>a>>b>>c;
     if(a+b==c){
        cout<<"+\n";

     }
     else cout<<"-\n";
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