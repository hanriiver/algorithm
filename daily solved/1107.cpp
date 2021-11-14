#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
bool arr[11];
int check(int x) {
	if (x == 0) {
		if (arr[x]) return 0;
		else return 1;
	}
	int len = 0;
	while (x > 0) {
		if (arr[x % 10]) return 0;
		x /= 10;
		len++;
	}
	return len;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, m, ans;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		arr[x] = true;
	}
	// 채널 c를 고정하고 고장난 버튼을 확인
	ans = abs(n - 100); //1.버튼 안누르고 +,-로만 움직였을 경우
	for (int i = 0; i <= 10000000; i++) {
		int c = i;
		int len = check(c);
		if (len > 0) {
			int press = abs(n - c);
			if (ans > press + len) {
				ans = press + len;
			}
		}
	}
	cout << ans;
}
