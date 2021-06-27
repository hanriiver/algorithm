#include <bits/stdc++.h>
using namespace std;
int chk[26];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    for (int i = 97; i < 123; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] == (char)i) {
                chk[s[j] - 'a']++;
            }
        }
    }
    int ans = -1;
    char answer;
    bool flag = false;
    for (int i = 0; i < 26; i++) {
        if (chk[i] > ans) {
            ans = chk[i];
            answer = i + 'a';
            flag = true;
        }
        else if (chk[i] == ans) flag = false;
    }
    if (flag) {
        answer = answer - 'a' + 'A';
        cout << answer;
    }
    else cout << "?";
}