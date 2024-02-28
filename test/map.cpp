#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n=3;
//	cin>>n;
     map<int,int>mp;
     for(int i=0;i<n;i++){
     	mp[i]++;
	 }
	 cout<<mp.size()<<'\n';
	 mp[0]--;
	 if(mp[0]==0){
	 	mp.erase(0);
	 }
	  cout<<mp.size()<<'\n';
	 for(auto i:mp){
	 	cout<<i.first<<" "<<i.second<<'\n';	 
	}
	return 0;
}