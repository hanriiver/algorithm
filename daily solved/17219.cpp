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
map<string, string> mm;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        mm[a] = b;
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        cout << mm[s] << "\n";
    }
}