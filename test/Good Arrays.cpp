#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
//int a[100001];
void solve(){
	int n,a,s1=0;
	cin>>n;
	ll s=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==1){
			s1++;
		}
		else s+=a-1;
	}
	if(n==1){
		cout<<"NO"<<endl;
		return ;
	}
	if(s>=s1){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
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