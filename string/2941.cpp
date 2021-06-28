#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    int ans = 0, del = 0;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1;) {
        if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-'))
        {
            ans++;
            del += 2;
            i += 2;
        }
        else if (i + 2 < n && s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
            ans++;
            del += 3;
            i += 3;
        }
        else if (s[i] == 'd' && s[i + 1] == '-') {
            ans++;
            del += 2;
            i += 2;
        }
        else if (s[i] == 'l' && s[i + 1] == 'j') {
            ans++;
            del += 2;
            i += 2;
        }
        else if (s[i] == 'n' && s[i + 1] == 'j') {
            ans++;
            del += 2;
            i += 2;
        }
        else if (s[i] == 's' && s[i + 1] == '=') {
            ans++;
            del += 2;
            i += 2;
        }
        else if (s[i] == 'z' && s[i + 1] == '=') {
            ans++;
            del += 2;
            i += 2;
        }
        else i++;
    }
    n -= del;
    if (n == 0) cout << ans;
    else {
        cout << n + ans;
    }
}

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