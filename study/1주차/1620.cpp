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
map<string, int> dic;
map<int, string> dic1;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        dic[s] = i;
        dic1[i] = s;
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (('a' <= s[0] && s[0] <= 'z') || ('A' <= s[0] && s[0] <= 'Z')) {
            cout << dic[s] << "\n";
        }
        else {
            cout << dic1[stoi(s)] << "\n";
        }
    }
}