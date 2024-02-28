#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
char a[100];
void solve(){
     int n,t;
     cin>>n>>t;
    cin>>a;
     while(t--){
     	for(int i=0;i<n;){
     		if(a[i]=='B'&&i<n-1&&a[i+1]=='G'){
     			swap(a[i],a[i+1]);
     			i+=2;
			 }
			 else i++;
		 }
	 }
	 cout<<a<<'\n';
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