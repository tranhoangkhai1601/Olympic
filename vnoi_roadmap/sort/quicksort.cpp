#include <bits/stdc++.h>

using namespace std;

int select_pivot(vector<int> &arr, int l, int r) {
    int pivot = arr[r], i = l - 1;

    for(int j = l; j < r; j++) {
        if (arr[j] < arr[r]) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[r]);
    return i;
}

void quicksort(vector<int> &arr, int l, int r) {
    if (l >= r) {
        return;
    }
    int pos = select_pivot(arr, l, r);
    if (l < pos - 1) {
        quicksort(arr, l, pos - 1);
    }
    if (r > pos + 1) {
        quicksort(arr, pos + 1, r);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, arr.size() - 1);

    for (int num : arr) {
        cout << num << " ";
    }
}