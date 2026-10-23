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
    string s; cin >> s;
    vector<bool> arr(n + 1);
    stack<int> st;
    for (int  i = 0; i < n; i++) {
        int index = i + 1;
        if (s[i] == '1') {
            st.push(index);
        }
        else if (s[i] == '2') {
            if (st.empty()) {
                arr[index] = true;
            } else {
                int in = st.top();
                st.pop();
                arr[in] = true;
            }
        }
        else if (s[i] == '3') {
            arr[index] = true;
        }
    }

    int cnt = 0;
    string res = "";
    for(int i = 1; i < n + 1; i++) {
        if(arr[i] != true) {
            cnt++;
            res += to_string(i) + " ";
        }
    }

    cout << cnt << '\n' << res << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();

    // solve();

}
