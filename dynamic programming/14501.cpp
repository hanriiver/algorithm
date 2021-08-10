#include <iostream>
using namespace std;
int n, ans = 0;
int t[16], p[16];
void go(int day, int sum) {
    if (day > n + 1) return;
    if (day == n + 1) {
        ans = max(sum, ans);
        return;
    }
    go(day + 1, sum);
    go(day + t[day], sum + p[day]);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> p[i];
    }
    go(1, 0);
    cout << ans;
}