#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
void solve() {
     int n;
     cin>>n;
     string s;
     cin>>s;
     vector<int>a(26,-1);
     for(int i=0;i<n;i++){
         int x=s[i]-'a';
         if(a[x]==-1){
            a[x]=i%2;
         }
         else{
            if(a[x]!=i%2){
                cout<<"NO\n";
                return ;
            }
         }
     }
     cout<<"YES\n";
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