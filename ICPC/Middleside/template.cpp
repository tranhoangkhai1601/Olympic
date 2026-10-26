#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
    string s = "9";
    int num = 12;
    string test = to_string((num % 10));
    s += test;
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}