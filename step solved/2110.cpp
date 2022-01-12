#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
using namespace std;
long long arr[200001];
long long n, c, max_length;
void bs() {
    long long s = 0;
    long long e = 2000000000;

    while (s <= e) {
        long long temp = arr[0];
        long long ans = 1;
        long long mid = (s + e) / 2;
        for (int i = 1; i < n; i++) {
            if (arr[i] - temp >= mid) {
                ans++;
                temp = arr[i];
            }
        }
        if (ans >= c) {
            s = mid + 1;
            if (mid > max_length) {
                max_length = mid;
            }
        }
        else {
            e = mid - 1;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> c;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    bs();
    cout << max_length;
}