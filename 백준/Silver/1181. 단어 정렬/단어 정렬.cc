#include<bits/stdc++.h>
using namespace std;
struct Word {
    string s;
    bool operator()(const string& a, const string& b) const {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    }
};
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    set<string,Word> Set;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        Set.insert(s);
    }
    for (auto k : Set) {
        cout << k << "\n";
    }
}