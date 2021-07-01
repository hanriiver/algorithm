#include <bits/stdc++.h>
using namespace std;
map<string, int> answer;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> v(n);
    vector<string> t(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) {
        while (1) {
            int idx = v[i].find('/');
            if (idx == string::npos)
                break;
            v[i].erase(0, idx + 1);
        }
        int size = v[i].size();
        //t[i].append(v[i][0] + v[i][size - 2] + v[i][size - 1]);
        t[i] += v[i][0];
        t[i] += v[i][size - 2];
        t[i] += v[i][size - 1];
    }
    for (int i = 0; i < n; i++) {
        answer[t[i]]++;
    }
    for (auto it : answer) {
        if (it.second == 1) continue;
        else cout << it.first << " " << it.second << "\n";
    }
}