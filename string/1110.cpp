#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    int cnt = 0;
    cin >> s;
    if (s.size() == 1) {
        s = '0' + s;
    }
    string ans = s;
    if (s == "0") {
        cout << 1;
        return -1;
    }
    int temp = 0;
    while (1) {
        temp = (s[0] - '0' + s[1] - '0') % 10;
        s = s[1] + to_string(temp);
        cnt++;

        if (s == ans) break;
    }
    cout << cnt;
}