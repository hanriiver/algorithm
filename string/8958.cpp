#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int cnt = 0, sum = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'O') {
                cnt++;
                sum += cnt;
            }
            else {
                cnt = 0;
            }
        }
        cout << sum << "\n";
    }
}