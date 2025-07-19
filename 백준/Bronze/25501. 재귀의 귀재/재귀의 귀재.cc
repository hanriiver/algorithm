#include <iostream>
#include <string>
using namespace std;

int cnt;

int isPalindrome(const string& s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return isPalindrome(s, l + 1, r - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cnt = 0;
        cout << isPalindrome(s, 0, s.length() - 1) << " " << cnt << "\n";
    }
    return 0;
}