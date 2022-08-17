#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int, string>, int>> v;
bool cmp(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b) {
    if (a.first.first < b.first.first) return true;
    else if (a.first.first == b.first.first) {
        if (a.second < b.second) return true;
        else return false;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        string s;
        cin >> x >> s;
        v.push_back({ { x,s },i });
    }
    sort(v.begin(), v.end(), cmp);
    for (auto k : v) {
        cout << k.first.first << " " << k.first.second << "\n";
    }
}