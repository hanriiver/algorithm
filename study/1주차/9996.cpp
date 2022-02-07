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
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    string pattern;
    cin >> pattern;
    string check_first, check_second;
    for (int i = 0; i < pattern.size(); i++) {
        if (pattern[i] == '*') {
            check_first = pattern.substr(0, i);
            check_second = pattern.substr(i + 1, pattern.size() - (i + 1));
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.size() >= check_first.size() + check_second.size()) {
            if (s.substr(0, check_first.size()) == check_first && s.substr(s.size() - check_second.size(), check_second.size()) == check_second) {
                cout << "DA" << "\n";
            }
            else cout << "NE" << "\n";
        }
        else cout << "NE" << "\n";
    }
}
