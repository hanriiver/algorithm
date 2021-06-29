#include <bits/stdc++.h>
using namespace std;
bool cmp(pair< pair<int, string>, int> a, pair < pair<int, string>, int> b) {
    if (a.first.first == b.first.first) return a.second < b.second;
    else return a.first.first < b.first.first;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<pair<int, string>, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first.first >> v[i].first.second;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << v[i].first.first << " " << v[i].first.second << "\n";
    }

}