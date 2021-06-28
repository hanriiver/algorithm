#include <bits/stdc++.h>
using namespace std;
bool cmp(char a, char b) {
    if (a > b) return true;
    else return false;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end(), cmp);
    cout << s;
}