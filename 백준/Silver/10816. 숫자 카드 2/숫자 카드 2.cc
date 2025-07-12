#include <iostream>
#include <algorithm>
using namespace std;
int n, m; 
int arr[500001];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    cin >> m;
    sort(arr, arr + n);
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        cout << upper_bound(arr, arr + n, temp) - lower_bound(arr, arr + n, temp) << " ";
    } 
}