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
    vector<ll> arr(3);
    for(int i = 0; i < 3; i++) cin >> arr[i];

    cout << getMax(abs(arr[0] - arr[1]), abs((arr[0] + arr[2]) - arr[1])) << '\n';
    
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();

    // solve();

}
