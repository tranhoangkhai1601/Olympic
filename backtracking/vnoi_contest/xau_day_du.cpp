#include <bits/stdc++.h>

using namespace std;

int n;
int ans = 0;
const int len = (1 << 26) - 1;
vector<int> arr;

void backtrack(int i, int current) {
    if (i == n) {
        if (current == len) {
            ans++;
        }
        return;
    }
    backtrack(i + 1, current);

    backtrack(i + 1, current | arr[i]);
}

void solve() {
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;

        for (char c : s) {
            arr[i] |= (1 << (c - 'a'));
        }
    }

    backtrack(0, 0);

    cout << ans;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();
    cin >> n;

    solve();
}