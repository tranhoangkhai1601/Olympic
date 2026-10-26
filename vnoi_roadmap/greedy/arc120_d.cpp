#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define fi first
#define se second


void solve() {
    int n; cin >> n;
    vector<pair<int, int>> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i].fi;
        arr[i].se = i;
    }
    sort(arr.begin(), arr.end());


    vector<int> type(2 * n);
    for (int i = 0; i < n ;i++) {
        type[arr[i].se] = 0;
    }
    for (int i = n; i < 2*n;i++) {
        type[arr[i].se] = 1;
    }
    stack<int> st;
    string res = "";
    for (int i = 0; i < 2*n ; i++) {
        if (!st.empty() && st.top() != type[i]) {
            res += ")";
            st.pop();
        } else {
            res += "(";
            st.push(type[i]);
        }
    }


    cout << res << '\n';
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}