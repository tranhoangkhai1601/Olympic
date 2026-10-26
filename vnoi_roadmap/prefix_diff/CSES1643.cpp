#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define minLL(x, y) (x > y ? y : x)
#define maxLL(x, y) (x > y ? x : y)


void solve() {
    int n; cin >> n;
    ll ans = LLONG_MIN;
    ll prefix = 0;
    ll prefix_min = 0;

    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        prefix += num;

        ans = maxLL(ans, prefix - prefix_min);

        prefix_min = minLL(prefix_min, prefix);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}