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
map<int, int> m1;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m1[x]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (m1[x] != 0) {
            cout << 1;
        }
        else cout << 0;
        cout << " ";
    }
}
