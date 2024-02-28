#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
char a[110];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
    	cin>>a;
    	int t=strlen(a);
    	if(t<=10){
    		cout<<a<<endl;
		}
		else{
			cout<<a[0]<<t-2<<a[t-1]<<endl;
		}
		memset(a,'0',sizeof(a));
	}
	return 0;
}