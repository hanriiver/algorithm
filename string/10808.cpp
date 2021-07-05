#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int dp[26];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    for (auto k : s) {
        dp[k - 'a']++;
    }
    for (auto k : dp) cout << k << " ";
}