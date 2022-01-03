#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[11];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = n; i >= 1; i--) {
        if (k / arr[i] > 0) {
            int temp = k / arr[i];
            k %= arr[i];
            ans += temp;
        }

    }
    cout << ans;
}