#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int row, col;
    cin >> row >> col;

    int n = 1;

    if (row == 1 && col == 1)
    {
        cout << "1" << '\n';
        return;
    }
    int maxValue = row > col ? row : col;

    int total = maxValue * maxValue;

    int init = 0, diff = 0;
    if(maxValue % 2 == 0) {
        if(maxValue == row) { // end
            init = total - col + 1;

        } else { // start
            diff = total - ((maxValue - 1) * (maxValue - 1));
            init = (total - diff - 1) + row + 1;
        }
    } else {
        if (maxValue == row) {
            diff = total - ((maxValue - 1) * (maxValue - 1));
            init = (total - diff - 1) + col + 1;
        } else {
            init = total - row + 1;
        }
    }
    cout << init << '\n';
    // cout << init << ' ' << total << ' ' << diff << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;
    while (testcases--)
        solve();
}