#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
ll sum(ll n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}
ll sum1(ll l, ll r) {
    return sum(r) - sum(l - 1);
}
void solve() {
    int n;
    cin>>n;
    int x = 1;
    while (x * (x + 1) / 2 < n) {
        x++;
    }
    int y = n - (x - 1) * x / 2;
    ll ans = 0;
    for (int i = 1; i <= x; i++) {
        int l = max(1, y - (x - i));
        int r = min(i, y);
        ans += sum1((i - 1) * i / 2 + l, (i - 1) * i / 2 + r);
    }
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