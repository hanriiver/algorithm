#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
using namespace std;
int chu_arr[31];
int gosle_arr[8];
int dp[31][15001];
int chu, gosle;
void go(int n, int sum) {
    //dp[x][y] = x�������� �߸� ������� �� y���Ը� ���� �� �ִ����� ����
    // 1, 4 g�� �ִٰ� �����ϸ�
    // �� �� 1:1�� �˻��ϴ� ��� 1g 4g 
    // ��ü�� �߸� ���ϴ� ��� 5g
    // ���� ���������� �����ٰ� �����ϴ� ��� 4-1=3g
    // ������� �̹� �湮�Ͽ����� ����, ���� �������� �ʰ��Ұ�� ����
    if (n > chu || dp[n][sum] != 0) {
        return;
    }
    dp[n][sum] = 1;
    go(n + 1, sum);
    go(n + 1, sum + chu_arr[n]);
    go(n + 1, abs(sum - chu_arr[n]));

}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin >> chu;
    for (int i = 0; i < chu; i++) {
        cin >> chu_arr[i];
    }
    cin >> gosle;
    for (int i = 0; i < gosle; i++) cin >> gosle_arr[i];
    go(0, 0);
    for (int i = 0; i < gosle; i++) {
        if (gosle_arr[i] > 15000) cout << "N" << " ";
        else {
            if (dp[chu][gosle_arr[i]] != 0) {
                cout << "Y" << " ";
            }
            else cout << "N" << " ";
        }
    }
}