#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
string t = "codeforces";
void solve() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[i])cnt++;
    }
    cout << cnt << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}