#include<bits/stdc++.h>
using namespace std;//格式化shift+alt+f
using ll = long long;
void solve() {

    char a[9][9];
    memset(a, '0', sizeof(a));
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 8; i++) {
        if (a[i][0] == 'R') {
            int t = 1;
            int y = 1;
            while (y < 8)t += a[i][y++] == 'R';
            if (t == 8) {
                cout << "R\n";
                return ;
            }
        }
        if (a[0][i] == 'B') {
            int t = 1;
            int x = 1;
            while (x < 8)t += a[x++][i] == 'B';
            if (t == 8) {
                cout << "B\n";
                return ;
            }
        }
    }
    cout << ".\n";
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