#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, mul = 0;
    string s;
    cin >> a >> b >> c;
    mul = a * b * c;
    s = to_string(mul);

    for (int i = 0; i < 10; i++) {
        int cnt = 0;
        for (int j = 0; j < s.size(); j++) {
            if (i + '0' == s[j]) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}