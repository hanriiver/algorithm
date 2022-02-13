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
int n, m, j;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m >> j;
    int l = 1;
    int ret = 0;
    for (int i = 0; i < j; i++) {
        int r = l + m - 1;
        int x;
        cin >> x;
        if (l <= x && x <= r) continue;
        else {
            if (x < l) {
                ret += (l - x);
                l = x;
            }
            else {
                l += (x - r);
                ret += (x - r);
            }
        }
    }
    cout << ret;
}