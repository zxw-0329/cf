#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	a+=(c+1)/2;
	b+=c/2;
	if(a>b){
		cout<<"First"<<endl;
	}
	else cout<<"Second"<<endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
    	solve();
	}
   
	return 0;
}