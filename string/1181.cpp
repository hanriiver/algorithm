#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
    if (a.size() < b.size()) return true;
    else if (a.size() == b.size()) {
        if (a < b) return true;
        return false;
    }
    else return false;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    string temp;
    for (int i = 0; i < n; i++) {
        if (temp == v[i]) {
            continue;
        }
        cout << v[i] << "\n";
        temp = v[i];
    }
}