#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
using namespace std;
int n, k;
vector<pair<int, int>> bag;
int dp[101][100001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        bag.push_back({ w,v });
    }
    // i��° ������ ���� �Ȱ��� ���� 1. ����� 2. �Ȱ� ���
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (bag[i - 1].first <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - bag[i - 1].first] + bag[i - 1].second);
            }
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k];
}