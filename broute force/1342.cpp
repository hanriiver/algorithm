#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
string s;
int ans = 0;
int alpha[26];
void go(char before, int index) {
    if (index == s.size()) {
        ans++;
        return;
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] < 1 || 'a' + i == before) continue;
        alpha[i]--;
        go(i + 'a', index + 1);
        alpha[i]++;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        alpha[s[i] - 'a']++;
    }
    go(0, 0);
    cout << ans;
}