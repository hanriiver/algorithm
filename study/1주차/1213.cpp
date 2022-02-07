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
int cnt[200];
char mid;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s;
    int flag = 0;
    string ret;
    for (char a : s) cnt[a]++;
    for (char i = 'Z'; i >= 'A'; i--) {
        if (cnt[i]) {
            if (cnt[i] & 1) {
                flag++;
                mid = char(i);
                cnt[i]--;
            }
            if (flag == 2) break;
            for (int j = 0; j < cnt[i]; j += 2) {
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
    if (flag == 2) cout << "I'm Sorry Hansoo";
    else cout << ret;
}
