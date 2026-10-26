#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    long long ans = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num >= m) {
            ans += num;
            cnt++;
        }
    }

    cout << cnt << " " << ans << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}