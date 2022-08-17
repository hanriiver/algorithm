#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) {
        return true;
    }
    else if (a.first == b.first) {
        if (a.second < b.second) {
            return true;
        }
        else return false;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({ x,y });
    }
    sort(v.begin(), v.end(), cmp);
    for (auto k : v) {
        cout << k.first << " " << k.second << "\n";
    }
}