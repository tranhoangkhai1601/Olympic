#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll extgcd(ll a, ll b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll q = a / b;
    ll r = a - b * q;
    int x1 = 0, y1 = 0;
    ll d = extgcd(b, r, x1, y1);
    x = y1;
    y = x1 - q * y1;
    return d;
}

ll invmod(ll a, ll m) {
    int x, y;
    ll d = extgcd(a, m, x , y);
    if (d != 1) {
        return -1;
    }
    x = (x % m + m) % m;
    return x;
}

void solve() {

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();
}