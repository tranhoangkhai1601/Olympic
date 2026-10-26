#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define ll long long

void solve(){
    int n = 20;
    // unordered_map<string, ll> boards;
    int lead = INT_MIN;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        string team; cin >> team;
        int point; cin >> point;
        arr[i] = point;
        lead = max(lead, point);
    }

    bool isLead = true;
    int point2 = INT_MIN;
    for (int num : arr) {
        if (num == lead && isLead) {
            isLead = false;
        } else {
            point2 = max(point2, num);
        }
    }

    cout << (lead > point2 + 9 ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}