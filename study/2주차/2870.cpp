#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
#include <queue>
#include <memory.h>
#include <map>
using namespace std;
vector<string> v;
bool cmp(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    }
    return a.size() < b.size();
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        string num = "";
        int zerocnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if ('0' <= s[i] && s[i] <= '9') {
                if (s[i] == '0') {
                    zerocnt++;
                }
                num += s[i];
            }
            else {
                if (num == "") continue;
                if (num[0] == '0') {
                    if (zerocnt == num.size()) {
                        v.push_back("0");
                    }
                    else {
                        while (1) {
                            if (num.front() == '0') num.erase(num.begin());
                            else break;
                        }
                        v.push_back(num);
                    }
                }
                else {
                    v.push_back(num);
                }
                zerocnt = 0;
                num = "";
            }
        }
        if (num.size() > 0) {
            if (num[0] == '0') {
                if (zerocnt == num.size()) {
                    v.push_back("0");
                }
                else {
                    while (1) {
                        if (num.front() == '0') num.erase(num.begin());
                        else break;
                    }
                    v.push_back(num);
                }
            }
            else {
                v.push_back(num);
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (auto k : v) {
        cout << k << "\n";
    }
}