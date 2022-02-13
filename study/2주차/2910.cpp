#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
#include <queue>
#include <memory.h>
#include <map>
using namespace std;
map<int, int> m1; // °³¼ö
map<int, int> m2; // ÀÎµ¦½º
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return m2[a.first] < m2[b.first];
    }

    return a.second > b.second;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m1[x]++;
        if (!m2[x]) {
            m2[x] = i + 1;
        }
    }
    for (auto k : m1) {
        v.push_back({ k.first,k.second });
    }
    sort(v.begin(), v.end(), cmp);

    for (auto k : v) {
        for (int i = 0; i < k.second; i++) {
            cout << k.first << " ";
        }
    }
}