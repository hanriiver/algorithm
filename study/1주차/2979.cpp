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
using namespace std;
int cnt[101];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) {
        int s, e;
        cin >> s >> e;
        for (int j = s; j < e; j++) {
            cnt[j]++;
        }
    }
    int ans = 0;
    for (int i = 1; i <= 100; i++) {
        if (cnt[i]) {
            if (cnt[i] == 1) {
                ans += a;
            }
            else if (cnt[i] == 2) {
                ans += b * 2;
            }
            else {
                ans += c * 3;
            }
        }
    }
    cout << ans;
}
