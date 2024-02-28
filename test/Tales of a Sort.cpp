#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++)cin>>a[i];
     
     int ans=0;
     for(int i=0;i<n-1;i++){
     	if(a[i]>a[i+1]){
     		ans=max(ans,a[i]);
		 }
	 }
	 cout<<ans<<'\n';
}
int main() {
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