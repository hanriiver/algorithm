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
int n;
string arr[65];
void go(int y, int x, int num) {
    if (num == 1) {
        cout << arr[y][x];
        return;
    }
    if (y >= n || x >= n) {
        return;
    }
    bool flag = true;
    for (int i = y; i < y + num; i++) {
        for (int j = x; j < x + num; j++) {
            if (arr[y][x] != arr[i][j]) {
                flag = false;
                break;
            }
        }
    }
    int n4 = num / 2;
    if (!flag) cout << "(";
    else {
        cout << arr[y][x];
        return;
    }
    go(y, x, n4);
    go(y, x + n4, n4);
    go(y + n4, x, n4);
    go(y + n4, x + n4, n4);
    cout << ")";
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    go(0, 0, n);
}