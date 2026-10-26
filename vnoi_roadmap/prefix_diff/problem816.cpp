#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 200003;
int S[N], D[N], A[N];

void update(int left, int right)
{
    D[left]++;
    D[right + 1]--;
}

void build_prefix(int k)
{
    S[0] = 0; A[0] = 0;
    for (int i = 1; i < N; i++)
    {
        A[i] = A[i - 1] + D[i];
        S[i] = S[i - 1] + (A[i] >= k);
    }
}

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        int left, right;
        cin >> left >> right;
        update(left, right);
    }
    build_prefix(k);
    for (int i = 0; i < q; i++)
    {
        int left, right;
        cin >> left >> right;
        cout << S[right] - S[left - 1] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}