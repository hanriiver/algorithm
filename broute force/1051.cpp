#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n, m;
int arr[51][51];
bool check(int x, int y) {
    return x >= n || y >= m;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int ans = 1;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 1; k <= 50; k++) {
                if (check(i + k, j + k)) continue;
                if (arr[i][j] != arr[i][j + k]) continue;
                if (arr[i][j] != arr[i + k][j]) continue;
                if (arr[i][j] != arr[i + k][j + k]) continue;
                ans = max(ans, (k + 1) * (k + 1));
            }
        }
    }
    printf("%d", ans);
}