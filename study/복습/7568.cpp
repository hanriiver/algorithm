#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int, int>, int>> v;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({ {x,y},i });
    }
    for (int i = 0; i < n; i++) {
        int index = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (v[i].first.first < v[j].first.first && v[i].first.second < v[j].first.second) index++;
        }
        v[i].second = index + 1;
    }
    for (auto k : v) cout << k.second << " ";
}