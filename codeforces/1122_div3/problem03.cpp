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
    int n; cin >> n;
    string s; cin >> s;

    if (s[0] == '1') {
        int cnt = 0;
        for (char c : s) {
            if (c == '0') {
                cnt++;
            }
        }
        cout << cnt << '\n';

    } else {
        int total_zero = 0;
        for (char c : s) {
            if (c == '0') {
                total_zero++;
            }
        }
        int min_op = total_zero;
        int one = 0;
        int zero = total_zero;

        for (char c : s) {
            if (c == '0') zero--;
            else if (c == '1') one++;

            min_op = getMin(min_op, zero + one);
        }

        cout << min_op << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();

    // solve();

}
