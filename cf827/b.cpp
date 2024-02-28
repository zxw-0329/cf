#include<bits/stdc++.h>
using namespace std;//格式化shift+alt+f
using ll = long long;
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";
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