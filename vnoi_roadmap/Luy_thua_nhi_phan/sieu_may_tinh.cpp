#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll POW(ll a, ll b, ll m) {
    ll res = 1;
    if (b == 0) return 1;
    while(b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        
        b /= 2;
    }

    return res;
}

void solve() {
    string A, B;
    ll M;
    cin >> A >> B >> M;

    ll base = 0;
    for (char c:A) {
        base = (base * 10 + c - '0') % M;
    }

    ll res = 1;

    for (ll i = B.length() - 1; i >= 0; i--) {
        int d = B.at(i) - '0';

        res = (res * POW(base, d, M)) % M;

        base = POW(base, 10, M);
    }

    cout << res << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();
}