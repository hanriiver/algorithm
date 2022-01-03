#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    string temp = "";
    cin >> s;
    bool flag = false;
    int ans = 0;
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == '-' || s[i] == '+' || s[i] == '\0') {
            if (flag) ans -= stoi(temp);
            else {
                ans += stoi(temp);

            }
            temp = "";
            if (s[i] == '-') {
                flag = true;
            }
            continue;
        }
        temp += s[i];
    }
    cout << ans;
}