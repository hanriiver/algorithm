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
int arr[100001];
int sum[100001];
int ans = -987654321;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }
    for (int i = k; i <= n; i++) {
        ans = max(ans, sum[i] - sum[i - k]);
    }
    cout << ans;
}
