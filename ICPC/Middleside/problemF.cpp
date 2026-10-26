#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define maxLL(x, y) (x > y ? x : y)
#define minLL(x, y) (x > y ? y : x)
#define my_abs(x) (x > 0 ? x : -x)

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    ll max_x = LLONG_MIN, max_y = LLONG_MIN;
    ll min_x = LLONG_MAX, min_y = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        ll x, y; cin >> x >> y;

        max_x = maxLL(max_x, x);
        max_y = maxLL(max_y, y);
        min_x = minLL(min_x, x);
        min_y = minLL(min_y, y);
    }

    for (int i = 0; i < m; i++) {
        ll x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;

        min_x = minLL(min_x, x1);
        min_y = minLL(min_y, y1);

        max_x = maxLL(max_x, x2);
        max_y = maxLL(max_y, y2);
    }

    for (int i = 0; i < q; i++) {
        ll x, y, r; cin >> x >> y >> r;

        max_x = maxLL(max_x, x + r);
        max_y = maxLL(max_y, y + r);
        min_x = minLL(min_x, x - r);
        min_y = minLL(min_y, y - r);
    }
    
    ll ans = maxLL(my_abs(max_x - min_x), my_abs(max_y - min_y));

    cout << ans * ans << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int testcases; cin >> testcases;
    while(testcases--)
    {solve();}

    return 0;
}