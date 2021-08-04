#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int arr[100001];
int marr[100001];
int n, m;
void binarary_search(int key) {
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            cout << "1" << "\n";
            return;
        }
        else if (arr[mid] < key) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    cout << "0" << "\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> marr[i];
    sort(arr, arr + n);
    for (int i = 0; i < m; i++) {
        binarary_search(marr[i]);
    }

}