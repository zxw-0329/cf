#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
char a[1000001];
void solve(){
     cin>>a;
     int t=strlen(a);
     int p=0;
     int k=t;
     for(int i=t-1;i>=0;i--){
         if((int)a[i]-48+p>=5){
         	p=1;
         	k=i;
		 }
		 else{
		 	a[i]+=p;
		 	p=0;
		 }
	 }
     for(int i=k;i<t;i++){
     	a[i]='0';
	 }
	 if(p){
	 	cout<<1<<a<<endl;
	 }
	 else cout<<a<<endl;
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