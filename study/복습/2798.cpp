#include <bits/stdc++.h>
using namespace std;
int n, m;
int ans = -9876543210;
int arr[101];
bool check[101];
void go(int cnt, int index, int sum) {
    if (sum > m) return;
    if (cnt == 3) {
        if (ans < sum) ans = sum;
        return;
    }
    for (int i = index; i < n; i++) {
        if (check[i]) continue;
        check[i] = true;
        go(cnt + 1, index, sum + arr[i]);
        check[i] = false;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    go(0, 0, 0);
    cout << ans;
}

/* 문제점 : 시간초과
* 해결여부 : x
#include <bits/stdc++.h>
using namespace std;
int n, m;
int ans = -9876543210;
int arr[101];
bool check[101];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    do {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += arr[i];
        }
        if (sum > ans&&sum<=m) ans = sum;
    } while (next_permutation(arr, arr + n));
    cout << ans;
}
*/