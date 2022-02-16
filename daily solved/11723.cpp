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
map<int, int> m;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    while (n--) {
        string s;
        int x;
        cin >> s;
        if (s == "all") {
            for (int i = 1; i <= 20; i++) {
                m[i] = 1;
            }
            continue;
        }
        else if (s == "empty") {
            m.clear();
            continue;
        }
        cin >> x;
        if (s == "add") {
            if (m[x] == 1) continue;
            m[x]++;
        }
        else if (s == "remove") {
            if (m[x] == 0) continue;
            m[x]--;
        }
        else if (s == "check") {
            if (m[x] == 1) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (s == "toggle") {
            if (m[x] == 1) {
                m[x]--;
            }
            else {
                m[x]++;
            }
        }
        else if (s == "all") {
            for (int i = 1; i <= 20; i++) {
                if (m[i] == 1) continue;
                m[i]++;
            }
        }
        else {
            for (int i = 1; i <= 20; i++) {
                m[i] = 0;
            }
        }
    }
}