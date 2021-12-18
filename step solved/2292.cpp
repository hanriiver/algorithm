#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long n, ans = 2, start = 2, endpoint = 7;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    while (1) {
        if (endpoint >= n) {
            cout << ans;
            break;
        }
        endpoint += (start * 6);
        start++;
        ans++;
    }
}

