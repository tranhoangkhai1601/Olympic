#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <queue>

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

    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<ll> prefix(n - 4);
    map<ll , ll> freq;

    for (ll i = 0; i < prefix.size(); i++) {
        prefix[i] = arr[i] + arr[i + 2] - arr[i + 4];
        freq[prefix[i]]++;
    }

    ll invalid = 0;
    ll total_pair = 0;

    for (auto [key, count] : freq) {
        total_pair += ((count * (count - 1)) / 2);
    }

    for (ll i = 0; i < prefix.size(); i++) {
        if (i + 2 < prefix.size() && prefix[i] == prefix[i + 2]) invalid++;
        if (i + 4 < prefix.size() && prefix[i] == prefix[i + 4]) invalid++;
    }
    cout << total_pair - invalid << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();

    // solve();

}
