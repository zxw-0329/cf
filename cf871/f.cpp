#include<bits/stdc++.h>
using namespace std;//格式化ctrl+c+f
using ll = long long;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int>e[n + 1];
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    int k = 0;
    for (int i = 1; i <= n; i++) {
        if (e[i].size() == 1) {
            for (auto i : e[i]) {
                k = i;
            }
            break;
        }
    }
    int y = e[k].size()-1;
    int x = (n - 1) / (y + 1);
    cout << x << " " << y << "\n";
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