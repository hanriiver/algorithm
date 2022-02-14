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

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    int i = 665;
    while (1) {
        i++;
        string s = to_string(i);
        if (s.find("666") != string::npos) {
            cnt++;
        }
        if (cnt == n) {
            cout << i;
            break;
        }
    }
}