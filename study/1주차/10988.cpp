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
    cin >> s;
    string temp = s;
    reverse(s.begin(), s.end());
    if (s == temp) {
        cout << 1;
    }
    else cout << 0;
}
