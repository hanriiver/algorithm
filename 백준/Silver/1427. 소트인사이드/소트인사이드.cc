#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end(), greater<>());
    cout << s;
}