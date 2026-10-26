#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

string to_string(__int128_t num) {
    string s = "";
    if (num == 0) {
        return "0";
    }
    while(num > 0) {
        s += (char)('0' + num % 10);
        num /= 10;
    }
    reverse(s.begin(), s.end());

    return s;
}

void solve() {
    int n; cin >> n;
    unordered_map<string, long long> maps;
    __int128_t ans = 0;
    for (int i = 0; i < n; i++) {
        string name; cin >> name;
        long long price; cin >> price;

        if (maps.count(name) == 0) {
            maps[name] = price;
            ans += price;
        } else if(maps[name] > price) {
            ans -= maps[name];
            maps[name] = price;
            ans += price;
        }
    }

    cout << maps.size() << " " << to_string(ans);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}