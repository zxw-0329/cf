#include<bits/stdc++.h>
using namespace std;//格式化shift+alt+f
using ll = long long;
void solve() {
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll>s(n + 1);
    for (int i = 0; i < n; i++) {
        s[i + 1] = s[i] + a[i];
    }
    while (q--) {
        int k;
        cin >> k;
        if (k >= a[0]) {
            ll l = 0, r = n - 1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (a[mid] > k) {
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            if (l == n) {
                cout << s[n] << " ";
            }
            else if (r == -1) {
                cout << 0 << " ";
            }
            else cout << s[l] << " ";
        }

    }
    cout << "\n";
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