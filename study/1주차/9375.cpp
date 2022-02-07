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
    int T;
    cin >> T;
    while (T--) {
        map<string, int> m;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string a, b;
            cin >> a >> b;
            m[b]++;
        }
        int ans = 1;
        for (auto k : m) {
            ans *= (k.second + 1);
        }
        cout << ans - 1 << "\n";
    }
}