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
int it = 1;
ll tot_length = 0;
vector<ll> R;

void sodium_sort(int l, int r) {
    if (l > r) return;
    tot_length += r - l + 1;
    int pivot_index = l + (R[it] % (r - l +1));
    it++;
    int p = partition(l, r, pivot_index);
    sodium_sort(l, p - 1);
    sodium_sort(p + 1, r);
}

void solve() {
    ll n; cin >> n;
    
    R.resize(n + 1);

    for (ll i = 1; i <= n; i++) {
        cin >> R[i];
    }

    sodium_sort(1, n);

    cout << tot_length;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}
