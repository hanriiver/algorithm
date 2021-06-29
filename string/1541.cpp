#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s, tmp = "";
    int answer = 0;
    bool flag = false;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '-' || s[i] == '+') {
            if (flag) answer -= stoi(tmp);
            else answer += stoi(tmp);
            tmp = "";
            if (s[i] == '-') flag = true;
        }
        else {
            tmp += s[i];
        }
    }
    if (flag) answer -= stoi(tmp);
    else answer += stoi(tmp);
    cout << answer;
}