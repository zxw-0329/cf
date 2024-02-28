#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
     int n;
     cin>>n;
     vector<int>last(1001);
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        last[x]=i+1;
     }
     int ans=-1;
     for(int i=1;i<=1000;i++){
        for(int j=1;j<=i;j++){
           if(last[i]&&last[j]&&gcd(i,j)==1){
              ans=max(last[i]+last[j],ans);
           }
        }
     }
     cout<<ans<<"\n";
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