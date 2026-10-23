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
const int MOD = 1e9 + 7;

#define getMax(a, b) ((a > b) ? a : b)
#define getMin(a, b) ((a > b) ? b : a)

struct Point
{
    int first, second;
};


void solve() {
    ll n; cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<pair<int, int>> freq;

    int left = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        if (freq.empty() || freq.back().fi != arr[i]) {
            freq.pb({arr[i], i});

            int size = freq.size();
            if (size >= 3) {
                ll x = freq[size - 3].fi;
                ll y = freq[size - 2].fi;
                ll z = freq[size - 1].fi;

                if ((x > y && y > z) || (x < y && y < z)) {
                    left = freq[size - 2].se;
                }
            }
        }
        ans += i - left;

    }

    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}
