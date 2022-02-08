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

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    while (cin >> n) {
        int cnt = 1, ans = 1;
        while (1) {
            if (cnt % n == 0) {
                cout << ans << "\n";
                break;
            }
            else {
                cnt = (cnt * 10) + 1;
                cnt %= n;
                ans++;
            }
        }
    }
}