#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int n;
vector<int> start;
vector<int> link;
int arr[21][21];
int ans = 987654321;
void go(int x) {
    if (x == n) {
        if (start.size() == n / 2 && link.size() == n / 2) {
            int ssum = 0, lsum = 0;
            for (int i = 0; i < start.size(); i++) {
                for (int j = 0; j < start.size(); j++) {
                    if (i == j) continue;
                    ssum += arr[start[i]][start[j]];
                    lsum += arr[link[i]][link[j]];
                }
            }
            int diff = 0;
            diff = abs(ssum - lsum);
            if (ans > diff) {
                ans = diff;
            }
        }
        return;
    }

    start.push_back(x);
    go(x + 1);
    start.pop_back();

    link.push_back(x);
    go(x + 1);
    link.pop_back();
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    go(0);
    cout << ans;
}