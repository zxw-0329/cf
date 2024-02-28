#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2) {
            cnt2 += a[i];
        }
        else cnt1 += a[i];
    }
    if (cnt1 > cnt2) {
        cout << "YES\n";
    }
    else cout << "NO\n";
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