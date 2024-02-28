#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
     int n;
     cin>>n;
     int t=n/2;
     if(t%2==1){
     	cout<<"NO"<<'\n';
	 }
	 else{
	 	cout<<"YES"<<'\n';
	 	for(int i=0;i<t;i++){
	 		cout<<2*(i+1)<<" ";
	 		
		 }ll s=(2+t*2)*t/2;
		for(int i=0;i<t;i++){
	 	   if(i==t-1){
	 	   	cout<<s-(2*t-2)*(t-1)/2<<'\n';
			}
			else cout<<2*i+1<<" ";
		 }
	 }	
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