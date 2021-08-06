#include <iostream>
#include <algorithm>
using namespace std;
int n, c, ans;
int arr[200001];
void binarary_tree() {
    int s = 1, e = arr[n - 1] - arr[0]; //공유기 설치 최소거리, 최대거리
    while (s <= e) {
        int mid = (s + e) / 2; //공유기 거리 기준 
        int count = 1; //공유기 설치 개수
        int start = arr[0];
        for (int i = 1; i < n; i++) {
            int diff = arr[i] - start;
            if (mid <= diff) {
                count++;
                start = arr[i];
            }
        }
        if (count >= c) { //공유기가 너무 많거나 조건에 부합하니 간격을 늘린다.
            ans = mid;
            s = mid + 1;
        }
        else { // 공유기가 더 설치되어야하므로 간격을 좁힌다.
            e = mid - 1;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> c;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    binarary_tree();
    cout << ans;
}