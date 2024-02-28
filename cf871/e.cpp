#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
int n,m;
int book[1001][1001];
int fx[][2]={0,1,0,-1,1,0,-1,0};
void dfs(int x,int y,int &cnt,vector<vector<int>>&a){
     book[x][y]=1;
     cnt+=a[x][y];
     
     for(int i=0;i<4;i++){
        int nx=x+fx[i][0];
        int ny=y+fx[i][1];
        if(nx<0||nx>=n||ny<0||ny>=m||book[nx][ny]||a[nx][ny]==0)continue;
        dfs(nx,ny,cnt,a);
     }

}
void solve() {
     cin>>n>>m;
     memset(book,0,sizeof(book));
     vector<vector<int>>a(n,vector<int>(m));
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
     }
     int ans=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]&&!book[i][j]){
                int cnt=0;
                dfs(i,j,cnt,a);
                ans=max(ans,cnt);
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