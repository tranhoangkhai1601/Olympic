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
    int n; cin >> n;
    vector<int> arr(n + 1);
    ll sum = 0, op = 0;
    vector<ll> res;

    vector<bool> isOpen(n + 1, false);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            isOpen[i] = true;
        }
        sum += arr[i];
    }

    if (sum == 0) { // All closed
        cout << 0 << '\n';
        return;
    }

    for(ll i = 1; i <= n; i++) {
        if (isOpen[i]) {
            op++;
            res.pb(i);
            for (ll j = 1; j <= 100; j++) {
                if (i * j <= n + 1) {
                    isOpen[i * j] = !isOpen[i * j];
                } else {
                    break;
                }
            }
        }
    }

    cout << op << '\n';
    for (ll num : res) {
        cout << num << ' ';
    }
    cout << '\n';



}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();

    // solve();

}
