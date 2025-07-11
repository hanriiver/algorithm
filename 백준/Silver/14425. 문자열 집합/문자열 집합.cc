#include<bits/stdc++.h>
using namespace std;
set<string> Set;
int ret;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        Set.insert(s);
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (Set.find(s) != Set.end()) ret++;
    }
    cout << ret;
}