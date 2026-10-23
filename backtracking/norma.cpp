//https://oj.vnoi.info/problem/norma
#include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <queue>

using namespace std;

#define ll long long
// #define int long long
#define fi first
#define se second
#define pb push_back
const ll max_VAL = INT_MAX;
const ll min_VAL = INT_MIN;
const int MOD = 1e9;

int n;
int res = 0;
vector<int> arr;

struct Point
{
    int first, second;
};

void solve() {
    cin >> n;
    arr.resize(n);
    int min_temp = INT_MAX, max_temp = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max_temp) max_temp = arr[i];
        if (arr[i] < min_temp) min_temp = arr[i];
    }
    // res = max_temp * min_temp * n;
    
    for (int i = 0; i < n; i++) {
        res += arr[i] * arr[i] * 1;
        // cout << res << endl;
        int min = arr[i], max = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > max) max = arr[j];
            if (arr[j] < min) min = arr[j];
            res += max * min * (j - i + 1);
        }
    }
    
    cout << res % MOD;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}
