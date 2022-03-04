#include <bits/stdc++.h>
using namespace std;
int k;
int arr[1030];
vector<int> g[11];
void go(int s, int e, int depth) {
    if (s >= e) return;
    int mid = (s + e) / 2;
    g[depth].push_back(arr[mid]);
    go(s, mid, depth + 1);
    go(mid + 1, e, depth + 1);
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> k;
    for (int i = 0; i < pow(2, k) - 1; i++) {
        cin >> arr[i];
    }
    go(0, pow(2, k) - 1, 0);
    for (int i = 0; i < k; i++) {
        for (auto k : g[i]) {
            cout << k << " ";
        }
        cout << "\n";
    }
}