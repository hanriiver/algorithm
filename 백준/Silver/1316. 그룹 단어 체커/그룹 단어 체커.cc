#include <bits/stdc++.h>
using namespace std;
bool check[26];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,ans=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool flag = true;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == s[j + 1]) continue;
            else {
                if(!check[s[j]-'a'])
                    check[s[j] - 'a'] = true;
                else {
                    flag = false;
                    break;
                }
            }
        }
        for (int i = 0; i < 26; i++) check[i] = false;
        if (flag) ans++;
    }
    cout << ans;
}