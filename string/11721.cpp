#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    while (s != "") {
        cout << s.substr(0, 10) << "\n";
        s.erase(0, 10);
    }
}