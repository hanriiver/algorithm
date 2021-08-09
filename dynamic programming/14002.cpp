#include <iostream>
using namespace std;

int arr[1001], dp[1001], index[1001];
void go(int p) {
    if (p == 0) return;
    go(index[p]);
    cout << arr[p] << " ";
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j] && dp[j] + 1 >= dp[i]) {
                dp[i] = dp[j] + 1;
                index[i] = j;
            }
        }
    }
    int ans = dp[0];
    int p = 0;
    for (int i = 1; i <= n; i++) {
        if (ans < dp[i]) {
            ans = dp[i];
            p = i;
        }
    }
    cout << ans << "\n";
    go(p);
    cout << "\n";
}