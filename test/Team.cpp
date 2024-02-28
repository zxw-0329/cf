#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int a[1001][3];
void solve(){
     int n;
     cin>>n;
    for(int i=0;i<n;i++){
    	for(int j=0;j<3;j++){
    		cin>>a[i][j];
		}
	}int ans=0;
	for(int i=0;i<n;i++){
	    int t=a[i][0]+a[i][1]+a[i][2];
	    if(t>=2)ans++;
	}
	cout<<ans<<'\n';
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t=1;
   // cin>>t;
    while(t--){
    	solve();
	}
	return 0;
}