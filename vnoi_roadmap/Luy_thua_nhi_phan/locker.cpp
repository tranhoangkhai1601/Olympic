#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;

ll POW(ll a, ll b) {
    ll ans = 1;
    while(b > 0) {
        if (b % 2 == 1) {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD ;
        b /= 2;
    }
    return ans;
}

void solve() {
    ll n; cin >> n;

    if (n <= 3) {
        cout << n << '\n';
        return;
    }

    ll ans = 1;

    if (n % 3 == 0) {
        ans = (POW(3, n / 3)) % MOD;
    } else if (n % 3 == 1) {
        ans = (POW(3, (n - 4) / 3) * 4) % MOD;
    } else if (n % 3 == 2) {
        ans = (POW(3, (n - 2) / 3) * 2) % MOD;
    }

    cout << ans << '\n';

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();
}