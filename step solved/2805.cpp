#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
using namespace std;
long long n, m;
long long arr[1000001];
long long ans;
void bs() {
    long long s = 0;
    long long e = INT_MAX;
    while (s <= e) {
        long long mid = (s + e) / 2;
        long long temp = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) {
                temp += (arr[i] - mid);
            }
        }
        if (temp >= m) {
            s = mid + 1;
            if (mid > ans) {
                ans = mid;
            }
        }
        else {
            e = mid - 1;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    bs();
    cout << ans;
}