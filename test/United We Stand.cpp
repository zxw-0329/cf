#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int a[110];
int b[110];
int c[110];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int j=0;
    for(int i=n-1;i>=0;i--){
    	if(i==n-1){
    		c[j++]=a[i];
		}
		else{
			if(a[i]==a[i+1]){
				c[j++]=a[i];
			}
			else break;
		}
	}
	if(j==n){
		cout<<-1;
	}
	else{
		cout<<n-j<<" "<<j<<endl;
		for(int i=0;i<n-j;i++){
			cout<<a[i]<<" ";
		}cout<<endl;
		for(int i=0;i<j;i++){
			cout<<c[i]<<" ";
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