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
string s[51];
string c1 = "WBWBWBWB";
string c2 = "BWBWBWBW";
int ans1, ans2;
void go(int x, int y) {
    ans1 = 0, ans2 = 0;
    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if (i % 2 == 0) {
                if (s[i][j] != c1[j % 8]) {
                    ans1++;
                }
            }
            else {
                if (s[i][j] != c2[j % 8]) {
                    ans1++;
                }
            }
        }
    }
    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if (i % 2 == 0) {
                if (s[i][j] != c2[j % 8]) {
                    ans2++;
                }
            }
            else {
                if (s[i][j] != c1[j % 8]) {
                    ans2++;
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int ans = 987654321;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + 8 > n || j + 8 > m) continue;
            go(i, j);
            int temp = min(ans1, ans2);
            ans = min(temp, ans);
        }
    }
    cout << ans;
}
