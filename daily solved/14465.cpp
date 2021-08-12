#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
bool arr[100001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, b, ans = INT_MAX;
    cin >> n >> k >> b;
    for (int i = 1; i <= b; i++) {
        int x;
        cin >> x;
        arr[x] = true;
    }
    for (int i = 1; i <= n - k + 1; i++) {
        int broken = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j]) broken++;
        }
        ans = min(ans, broken);
    }
    cout << ans;
}