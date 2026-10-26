#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define ll long long

bool custom_comp(pair<ll, ll> a, pair<ll, ll> b) {
    return a.se < b.se;
}

void solve() {
    int n; cin >> n;
    vector<pair<long long, long long>> arr(n);

    for (int i = 0; i < n; i++) {
        long long start, end; cin >> start >> end;
        arr[i].fi = start;
        arr[i].se = end;
    }

    sort(arr.begin(), arr.end(), custom_comp);
    long long ans = 1;
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[index].se <= arr[i].fi) {
            ans++;
            index = i;
        }
    }


    // for (int i = 0; i < n; i++) {
    //     cout << arr[i].fi << " " << arr[i].se << '\n';
    // }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}