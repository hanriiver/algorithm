#include <bits/stdc++.h>
using namespace std;
vector<string> v;
bool cmp(string a, string b) {
    if (a.size() < b.size()) return true;
    else if (a.size() == b.size()) {
        if (a < b) return true;
        else return false;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    string temp = v[0];
    cout << temp << "\n";
    for (int i = 1; i < n; i++) {
        if (temp != v[i]) {
            temp = v[i];
            cout << v[i] << "\n";
        }
    }
}