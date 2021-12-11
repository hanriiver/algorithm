#include <iostream>
#include <string>
using namespace std;
int arr[3];
int ans;
void solved(int n) {
    if (n < 100) {
        return;
    }
    int temp = n;
    for (int i = 0; i < 3; i++) {
        arr[i] = temp % 10;
        temp /= 10;
    }
    if (arr[0] - arr[1] == arr[1] - arr[2]) {
        ans++;
    }
    int n4 = n - 1;
    solved(n4);

}
int main() {
    int n;
    cin >> n;
    if (n < 100) {
        cout << n;
        return 0;
    }
    else if (n == 1000) {
        solved(n - 1);
    }
    else {
        solved(n);
    }
    cout << ans + 99;
}