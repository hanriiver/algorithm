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
int n, m;
int arr[51][51];
vector<pair<int, int>> house, chikin, v;
bool check[14];
int ans = 9876543210;
int go() {
    int sum = 0;
    for (int i = 0; i < house.size(); i++) {
        int y = house[i].first;
        int x = house[i].second;
        int d = 9876543210;
        for (int j = 0; j < v.size(); j++) {
            int cy = v[j].first;
            int cx = v[j].second;
            int temp = abs(cy - y) + abs(cx - x);
            d = min(temp, d);
        }
        sum += d;
    }
    return sum;
}
void select(int index, int cnt) {
    if (cnt == m) {
        int temp = go();
        ans = min(temp, ans);
        return;
    }
    for (int i = index; i < chikin.size(); i++) {
        if (check[i]) continue;
        check[i] = true;
        v.push_back({ chikin[i].first,chikin[i].second });
        select(i + 1, cnt + 1);
        v.pop_back();
        check[i] = false;
    }

}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {

                house.push_back({ i,j });
            }
            if (arr[i][j] == 2) {
                chikin.push_back({ i,j });
            }
        }
    }
    select(0, 0);
    cout << ans;
}