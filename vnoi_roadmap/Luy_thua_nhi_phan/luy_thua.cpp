#include <bits/stdc++.h>

using namespace std;

#define ll long long 

void solve() {
    int a;
    ll b; cin >> a >> b;

    if (a == 0) {
        cout << 0 << '\n';
        return;
    }
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % 10;
        }
        a = (a * a) % 10;
        b /= 2;
    }
    cout << res << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();
}