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
bool isMo(int index) {
    return (index == 0 || index == 4 || index == 8 || index == 14 || index == 20);
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    while (cin >> s) {
        if (s == "end") break;
        int mocnt = 0, jacnt = 0;
        int r = 0;
        bool flag = true;
        for (int i = 0; i < s.size(); i++) {
            int check = s[i] - 'a';
            if (isMo(check)) {
                mocnt++;
                jacnt = 0;
                r++;
            }
            else {
                jacnt++;
                mocnt = 0;
            }
            if (jacnt == 3 || mocnt == 3) {
                flag = false;
                break;
            }
            if (i >= 1 && s[i - 1] == s[i] && (check != 4 && check != 14)) {
                flag = false;
                break;
            }
        }
        if (r == 0) flag = false;
        if (flag) cout << "<" << s << ">" << " is acceptable." << "\n";
        else cout << "<" << s << ">" << " is not acceptable." << "\n";
    }
}