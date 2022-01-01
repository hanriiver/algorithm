#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[10001];
int dp[10001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1] = arr[1], dp[2] = arr[1] + arr[2];
    for (int i = 3; i <= n; i++) {
        //i번째 포도잔을 마실 것인가
        dp[i] = max({ arr[i] + dp[i - 2],arr[i] + arr[i - 1] + dp[i - 3],dp[i - 1] });
    }
    cout << dp[n];

}