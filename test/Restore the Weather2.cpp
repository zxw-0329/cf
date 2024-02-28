#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve(){
     int n, k; 
	 cin >> n >> k;
    vector<pair<int,int>> a;
    vector<int>b(n);
    for (int i = 0; i < n; i++) {
            int x; 
	        cin >> x;
            a.push_back({x, i});
    }
    for (int i = 0; i < n; i++) {
         cin>>b[i];
    }
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      ans[a[i].second] = b[i];
    }
 
    for (int i : ans) {
      cout << i << " ";
    }
    cout << '\n';
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