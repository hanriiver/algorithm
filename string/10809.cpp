#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    char cnt = 97;
    while (1) {
        if (cnt == 123) break;
        bool flag = false;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (cnt == s[i]) {
                ans = i;
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << ans << " ";
        }
        else cout << -1 << " ";
        cnt++;
    }
}