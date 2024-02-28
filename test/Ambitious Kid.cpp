#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
	int n;
	cin>>n;
//	vector<int>a(n);
	int minn=1e6;
	for(int i=0;i<n;i++){
		int x;cin>>x;
	//	a.push_back(x);
	     minn=min(minn,abs(x));
	}
	cout<<minn<<'\n';
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
     int t=1;
     while(t--){
     	solve();
	 }
	return 0;
}