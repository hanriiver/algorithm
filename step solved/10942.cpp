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
int arr[2001];
int dp[2001][2001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) dp[i][i] = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i + 1]) dp[i][i + 1] = 1;
    }
    for (int i = 2; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (arr[j] == arr[i + j] && dp[j + 1][i + j - 1] == 1) {
                dp[j][j + i] = 1;
            }
        }
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        cout << dp[x][y] << "\n";
    }
}