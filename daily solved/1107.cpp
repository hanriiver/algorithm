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
	// ä�� c�� �����ϰ� ���峭 ��ư�� Ȯ��
	ans = abs(n - 100); //1.��ư �ȴ����� +,-�θ� �������� ���
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
