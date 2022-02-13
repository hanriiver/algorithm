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
//3474번 : 교수가 된 현우

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int five = 0;
        for (int i = 5; i <= n; i *= 5) {
            five += (n / i);
        }
        cout << five << "\n";
    }
}