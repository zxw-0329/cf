#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)cin >> a[i];

    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cnt++;
        }
        else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    cout << ans << "\n";
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