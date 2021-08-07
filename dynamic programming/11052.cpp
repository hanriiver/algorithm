#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001]; // N���� ī�带 �����ϱ� ���� �α԰� �����ؾ� �ϴ� �ݾ��� �ִ�
int price[1001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }
    dp[1] = price[1];
    for (int i = 2; i <= n; i++) { // 
        for (int j = 1; j <= i; j++) {
            int temp = dp[i - j] + price[j];
            dp[i] = max(temp, dp[i]);
        }
    }
    cout << dp[n];
}