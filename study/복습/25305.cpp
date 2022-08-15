#include <bits/stdc++.h>
using namespace std;
int n, k;
int arr[1001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n, greater<>());
    cout << arr[k - 1];
}