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
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if ('a' <= s[i] && s[i] <= 'z') {
            if (s[i] + 13 > 'z') {
                s[i] = s[i] - 13;
            }
            else s[i] = s[i] + 13;
        }
        else if ('A' <= s[i] && s[i] <= 'Z') {
            if (s[i] + 13 > 'Z') {
                s[i] = s[i] - 13;
            }
            else s[i] = s[i] + 13;
        }
    }
    cout << s;
}