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
long long arr[10001];

long long bs() {
    long long s = 0;
    long long e = INT_MAX;
    long long re = 0;
    while (s <= e) {
        long long ans = 0;
        long long mid = (s + e) / 2;
        for (int i = 0; i < n; i++) {
            ans += arr[i] / mid;
        }
        if (ans >= k) {
            s = mid + 1;
            if (mid > re) {
                re = mid;
            }
        }
        else {
            e = mid - 1;
        }
    }
    return re;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << bs();
}