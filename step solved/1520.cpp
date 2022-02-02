/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int dp[501][501];
int arr[501][501];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m;
int dfs(int y, int x) {
    if (y == m - 1 && x == n - 1) {
        return 1;
    }
    if (dp[y][x] == -1) {
        dp[y][x] = 0;
        for (int i = 0; i < 4; i++) {
            int ny = dy[i] + y;
            int nx = dx[i] + x;
            if (ny < 0 || ny >= m || nx < 0 || nx >= n || arr[y][x] <= arr[ny][nx]) {
                continue;
            }
            dp[y][x] += dfs(ny, nx);
        }
    }
    return dp[y][x];
}
int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            dp[i][j] = -1;
        }
    }
    cout << dfs(0, 0);
}