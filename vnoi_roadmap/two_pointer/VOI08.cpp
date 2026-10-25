#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define my_abs(x) (x > 0 ? x : -x)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i = 0, j = n - 1;
    ll min = LLONG_MAX;

    while (i < n && j >= 0)
    {
        ll curr_sum = a[i] + b[j];
        min = (min > my_abs(curr_sum) ? my_abs(curr_sum) : min);

        if (curr_sum > 0)
        {
            j--;
        }
        else if (curr_sum < 0)
        {
            i++;
        }
        else
        {
            break;
        }
    }

    cout << min;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}