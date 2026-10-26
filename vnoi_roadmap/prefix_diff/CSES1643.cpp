#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define minLL(x, y) (x > y ? y : x)
#define maxLL(x, y) (x > y ? x : y)

void solve() {
    int n; cin >> n;
    vector<ll> arr(n);
    vector<ll> prefix(n + 1, 0);
    vector<ll> prefix_min(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        prefix[i + 1] = prefix[i] + arr[i];
        prefix_min[i + 1] = minLL(prefix[i + 1], prefix_min[i]);
    }

    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; i++) {
        ans = maxLL(ans ,prefix[i] - prefix_min[i - 1]);
    }
    cout << ans << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}