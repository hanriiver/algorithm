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
int a, b;
bool check[10001];

void bfs() {
    queue<pair<int, string>> qu;
    check[a] = true;
    qu.push({ a,"" });
    while (!qu.empty()) {
        int onum = qu.front().first;
        string oorder = qu.front().second;
        qu.pop();
        if (onum == b) {
            cout << oorder << "\n";
            return;
        }
        int d, s, l, r;
        d = (2 * onum) % 10000;
        if (!check[d]) {
            check[d] = true;
            qu.push({ d,oorder + 'D' });
        }
        s = onum - 1;
        if (s < 0) s = 9999;
        if (!check[s]) {
            check[s] = true;
            qu.push({ s,oorder + 'S' });
        }
        l = (onum % 1000) * 10 + (onum / 1000);
        if (!check[l]) {
            check[l] = true;
            qu.push({ l,oorder + 'L' });
        }
        r = (onum % 10) * 1000 + (onum / 10);
        if (!check[r]) {
            check[r] = true;
            qu.push({ r,oorder + 'R' });
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        cin >> a >> b;
        bfs();
        memset(check, false, sizeof(check));
    }
}