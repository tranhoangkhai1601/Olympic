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

string s;
void solve() {
    cin >> s;
    vector<ll> arr(26);
    
    ll cnt = 0;
    ll res = 0;

    for (int i = 0; i < s.length(); i++) {
        char c = s.at(i);
        arr[c - 'A']++;
        
    }

    for (int i = 0; i < 26; i++) {
        res += arr[i] / 2;
        if (arr[i] % 2 != 0) {
            cnt++;
        }

        
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}
