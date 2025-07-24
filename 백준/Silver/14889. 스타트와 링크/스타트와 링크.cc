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
int n;
int arr[21][21];
int ret = 987654321;
vector<int> startlink;
vector<int> link;
void go(int x) {
    if (x == n) {
        if (startlink.size() == n / 2 && link.size() == n / 2) {
            int ssum = 0; int lsum = 0;
            for (int i = 0; i < n / 2; i++) {
                for (int j = 0; j < n / 2; j++) {
                    if (i == j) continue;
                    ssum += arr[startlink[i]][startlink[j]];
                    lsum += arr[link[i]][link[j]];
                }
            }
            ret = min(abs(ssum - lsum), ret);
        }
        return;
    }
    startlink.push_back(x);
    go(x + 1);
    startlink.pop_back();

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
    cout << ret;
}
