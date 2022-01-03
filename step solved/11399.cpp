#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
vector<pair<int, int>> v;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back({ x,i });
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += v[i].first;
        for (int j = 0; j < i; j++) {
            ans += v[j].first;
        }
    }
    cout << ans;
}