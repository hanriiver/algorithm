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
string s[151];
int arr[26];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        arr[s[i][0] - 'a']++;
    }
    bool flag = false;
    for (int i = 0; i < 26; i++) {
        if (arr[i] >= 5) {
            cout << char(i + 'a');
            flag = true;
        }
    }
    if (!flag) cout << "PREDAJA";
}
