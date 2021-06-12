#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool arr[11];
int check(int n) {
    if (n == 0) {
        if (arr[0]) return 0;
        else return 1;
    }
    int len = 0;
    while (n > 0) {
        if (arr[n % 10]) return 0;
        n /= 10;
        len++;
    }
    return len;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m,ans=0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        arr[x] = true;
    }
    ans = abs(n - 100); // +,- 버튼으로만 갈 수 있는 경우를 초기값으로 설정
    for (int i = 0; i <= 1000000; i++) {
        int c = i;
        int len = check(c); // 리모컨을 누른 횟수
        if (len > 0) {
            int press = abs(c - n); 
            if (ans > press + len) {
                ans = press + len;
            }
        }
    }
    cout << ans;
}