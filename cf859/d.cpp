#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
void solve() {
    int n, q;
    cin >> n >> q;
    vector<int>a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<ll>sum(n + 1);
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + a[i];
    }
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        ll s = sum[l - 1] + sum[n] - sum[r] + (l - r + 1) * k;
        if (s % 2) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
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