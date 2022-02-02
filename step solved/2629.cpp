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
    //dp[x][y] = x번까지의 추를 사용했을 때 y무게를 만들 수 있는지의 여부
    // 1, 4 g램 있다고 가정하면
    // 각 각 1:1로 검사하는 방법 1g 4g 
    // 전체와 추를 비교하는 방법 5g
    // 왼쪽 오른쪽으로 나눈다고 생각하는 방법 4-1=3g
    // 기저사례 이미 방문하였으면 리턴, 추의 개수보다 초과할경우 리턴
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