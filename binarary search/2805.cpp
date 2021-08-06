#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
long long ans;
int arr[1000001];
void binarary_tree() {
    int s = 1, e = 1000000000;
    while (s <= e) {
        int mid = (s + e) / 2; // 톱니 기준
        long long count = 0; // 나무가져갈려는 수
        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) {
                int slice = arr[i] - mid;
                count += slice;
            }
        }
        if (count >= m) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    binarary_tree();
    cout << ans;
}