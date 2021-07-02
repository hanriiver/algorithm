#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long r, b, d;
        cin >> r >> b >> d;
        if (min(r, b) * (d + 1) >= max(r, b)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}