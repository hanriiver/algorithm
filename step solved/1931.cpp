#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
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
    int ans = 0;
    sort(v.begin(), v.end(), cmp);
    int temp = v[0].second;
    for (int i = 0; i < n - 1; i++) {
        if (temp <= v[i + 1].first) {
            temp = v[i + 1].second;
            ans++;
        }
    }
    cout << ans + 1;
}