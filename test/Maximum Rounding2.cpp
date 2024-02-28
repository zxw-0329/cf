#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
char a[1000001];
int b[1000001];
void solve(){
     cin>>a;
     int t=strlen(a);
     int p=0;
     int k=t;
     for(int i=t-1;i>=0;i--){
        b[i]=a[i]-48;
	 }
     for(int i=t-1;i>=0;i--){
     	if(b[i]>=5&&i!=0){
     		b[i-1]++;
     		k=i;
		 }
		 if(i==0&&b[i]>=5){
		 	p=1;
		 }
	 }
	 for(int i=k;i<t;i++){
	 	b[i]=0;
	 }
	 if(p){
	 	cout<<1;
	 	while(t--){
	 		cout<<0;
		 }
	 }
	 else{
	 	for(int i=0;i<t;i++){
	 	cout<<b[i];
	 }
	 }
	 
	 cout<<endl;
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