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
int psum[81];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        string s;
        int ret = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'O') {
                if (i == 0) {
                    psum[i] = 1;
                }
                else {
                    psum[i] = psum[i - 1] + 1;
                }
            }
            else {
                psum[i] = 0;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            ret += psum[i];
        }
        cout << ret << "\n";
        memset(psum, 0, sizeof(psum));
    }
}