#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define se second
#define fi first

bool custom_comp(pair<int, int> a, pair<int, int> b) {
    return a.fi < b.fi;
}

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        int dura, deadline;
        cin >> dura >> deadline;
        arr[i].fi = dura;
        arr[i].se = deadline;
    }

    sort(arr.begin(), arr.end(), custom_comp);
    ll time = 0;
    ll reward = 0;
    for (int i = 0; i < n; i++) {
        time += arr[i].fi;
        reward += arr[i].se - time;
    }

    cout << reward << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}