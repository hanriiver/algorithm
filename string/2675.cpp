#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s, t = "";
        cin >> n >> s;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < n; j++) {
                t += s[i];
            }
        }
        cout << t << "\n";
    }
}