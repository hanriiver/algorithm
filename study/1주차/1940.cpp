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
int ans;
int n, m;
int arr[15001];
void binary_search(int index, int num) {
    int s = index;
    int e = n;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] <= num) {
            if (arr[mid] == num) {
                ans++;
            }
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 1; i < n - 1; i++) {
        binary_search(i + 1, m - arr[i]);
    }
    cout << ans;
}
