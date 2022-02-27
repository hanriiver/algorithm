#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int ret = -987654321;
vector<int> num;
vector<char> op;

int oper(char o, int a, int b) {
    if (o == '+') return a + b;
    if (o == '-') return a - b;
    if (o == '*') return a * b;
}
void go(int index, int sum) {
    if (index >= num.size() - 1) {
        ret = max(ret, sum);
        return;
    }
    go(index + 1, oper(op[index], sum, num[index + 1]));
    if (index + 2 <= num.size() - 1) {
        int temp = oper(op[index + 1], num[index + 1], num[index + 2]);
        go(index + 2, oper(op[index], sum, temp));
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if ('0' <= s[i] && s[i] <= '9') {
            num.push_back(s[i] - '0');
        }
        else op.push_back(s[i]);
    }
    go(0, num[0]);
    cout << ret;
}

