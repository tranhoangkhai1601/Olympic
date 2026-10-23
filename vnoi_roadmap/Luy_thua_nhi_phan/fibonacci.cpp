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
const ll MOD = 1e9 + 7;

#define getMax(a, b) ((a > b) ? a : b)
#define getMin(a, b) ((a > b) ? b : a)

struct Point
{
    int first, second;
};

struct Matrix {
    ll mat[2][2];
    Matrix() {
        memset(mat, 0, sizeof(mat));
    }
};

Matrix Mul(const Matrix A, const Matrix B) {
    Matrix ans;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                (ans.mat[i][j] += (A.mat[i][k] * B.mat[k][j]) % MOD) %= MOD;
            }
        }
    }

    return ans;
}

Matrix Pow (const Matrix T, ll n) {
    if (n == 1) {
        return T;
    }

    Matrix test = Pow(T, n / 2);
    if (n % 2 == 0) {
        return Mul(test, test);
    } else {
        return Mul(Mul(test, test), T);
    }

}



void solve() {
    ll n; cin >> n;

    if(n == 1) {cout << 1 << '\n'; return;}
    if(n == 0) {cout << 0 << '\n'; return;}

    Matrix T;
    T.mat[0][0] = T.mat[0][1] = T.mat[1][0] = 1;
    T.mat[1][1] = 0;

    T = Pow(T, n - 1);

    Matrix base;
    base.mat[0][0] = 1;
    base.mat[1][0] = 0;

    cout << Mul(T, base).mat[0][0] << '\n';

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int testcases; cin >> testcases;
    // while(testcases--) solve();

    solve();

}
