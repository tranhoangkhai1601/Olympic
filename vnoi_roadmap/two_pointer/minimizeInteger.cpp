#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long



void solve() {
    string s; cin >> s;
    string res = "";

    queue<char> odd, even;

    for (char c : s) {
        int d = c - '0';
        if (d & 1) {
            odd.push(c);
        } else {
            even.push(c);
        }
    }

    while(!odd.empty() && !even.empty()) {
        if (odd.front() > even.front()) {
            res += even.front();
            even.pop();
        } else {
            res += odd.front();
            odd.pop();
        }
    }

    while(!odd.empty()) {
        res += odd.front();
        odd.pop(); 
    }

    while(!even.empty()) {
        res += even.front();
        even.pop();
    }
    
    cout << res << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int testcases; cin >> testcases;
    while(testcases--) solve();
    
    return 0;
}