#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
int flag;
int n,m;
void dfs(int n){
     if(n==m){
        flag=1;
        return ;
     }
     if(n%3||n<m)return ;
     dfs(n/3*2);
     dfs(n/3);
}
void solve() {
     cin>>n>>m;
     flag=0;
     dfs(n);
     if(flag)cout<<"YES\n";
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