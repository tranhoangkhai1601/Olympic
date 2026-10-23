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
    int g, w, r, t; cin >> g >> w >> r >> t;
    vector<int> arr = {g, w, r};
    vector<string> out = {"Guiding Beat", "Warning Beat", "Resting Phase"};
    int stage = t % (g + w + r);
    if (stage < g) {
        cout << out[0] << '\n';
    } else if (stage < (g + w)) {
        cout << out[1] << '\n';
    } else {
        cout << out[2] << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();

    // solve();

}
