#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int a[100];
//void solve(){
//	int n;
//	cin>>n;
//	int s=0,s1=0;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	    s+=a[i];
//	}
////	sort(a,a+n);
//	for(int i=0;i<n-1;i++){
//		s1+=a[i];
//		if(s1%2==0&&(s-s1)%2==0||s1%2==1&&(s-s1)%2==1){
//			cout<<"YES"<<endl;
//			return ;
//		}
//	}
//	cout<<"NO"<<endl;
//}
void solve(){
	int n;
	cin>>n;
	int x,s=0;
	for(int i=0;i<n;i++){
		cin>>x;
		s+=x;
	}
	cout<<((s%2==0)?"YES":"NO")<<endl;
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