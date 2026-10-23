#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <queue>
#include <stack>

using namespace std;

#define ll long long
#define fi first
#define se second
#define pb push_back
const ll max_VAL = INT_MAX;
const ll min_VAL = INT_MIN;
const int MOD = 1e9;

#define getMax(a, b) ((a > b) ? a : b)
#define getMin(a, b) ((a > b) ? b : a)

struct Point
{
    int first, second;
};


void solve() {
    ll n, k; cin >> n >> k;
    vector<vector<ll>> arr(n, vector<ll> (3));

    for (ll i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    auto check = [&](ll target) {
        ll total_ops = 0;
        for (int i = 0; i < n; i++) {
            ll a = arr[i][0];
            ll b = arr[i][1];
            ll c = arr[i][2];
            ll sum = a + b + c;

            if (sum >= target) continue;

            if (a <= b && b <= c) {
                if (a == c) return false;

                ll min_drop = 4e18;
                
                if (a < c) min_drop = min(min_drop, b - a + 1);
                
                if (a < b) min_drop = min(min_drop, c - b + 1);

                total_ops += (target - sum) + 2 * min_drop;
            } else {
                total_ops += (target - sum);
            }

            if (total_ops > k) return false;
        }
        return total_ops <= k;
    };

    ll low = -4e9; 
    ll high = 2e18; 
    ll ans = low;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (check(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();

    // solve();

}
