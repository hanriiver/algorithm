#include <bits/stdc++.h>
using namespace std;
int arr[10];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int sum = 0;
    for (int i = 1; i <= 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    bool flag = false;
    for (int i = 1; i < 9; i++) {
        for (int j = i + 1; j <= 9; j++) {
            int temp = sum;
            if ((temp -= (arr[i] + arr[j])) == 100) {
                arr[i] = 0, arr[j] = 0;
                flag = true;
            }
        }
        if (flag) {
            break;
        }
    }
    sort(arr, arr + 10);
    for (int i = 1; i <= 9; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << "\n";
        }
    }
}