#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<string> v = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    string s;
    cin >> s;
    for (int i = 0; i < v.size(); i++) {
        while (1) {
            int idx = s.find(v[i]);
            if (idx == string::npos)
                break;
            s.replace(idx, v[i].size(), "#");
        }
    }
    cout << s.size();
}