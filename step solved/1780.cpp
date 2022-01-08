#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <string>
#include <deque>
using namespace std;
int arr[2220][2200];
int one, zero, minus_;
void solved(int x, int y, int n) {
    if (n == 1) {
        if (arr[y][x] == 1) one++;
        else if (arr[y][x] == 0) zero++;
        else minus_++;
        return;
    }
    bool flag = true;
    for (int i = y; i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (arr[y][x] != arr[i][j]) {
                flag = false;
                break;
            }
        }
    }
    if (flag) {
        if (arr[y][x] == 1) one++;
        else if (arr[y][x] == 0) zero++;
        else minus_++;
        return;
    }
    int n9 = n / 3;
    solved(x, y, n9);
    solved(x + n9, y, n9);
    solved(x + n9 * 2, y, n9);
    solved(x, y + n9, n9);
    solved(x + n9, y + n9, n9);
    solved(x + n9 * 2, y + n9, n9);
    solved(x, y + n9 * 2, n9);
    solved(x + n9, y + n9 * 2, n9);
    solved(x + n9 * 2, y + n9 * 2, n9);

}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    solved(0, 0, n);
    cout << minus_ << "\n" << zero << "\n" << one;
}