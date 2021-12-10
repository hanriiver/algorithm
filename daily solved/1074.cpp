#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int n, r, c, ans;

void solved(int x, int y, int n) {
	// ���� ��� r , c ��ǥ�� ������ ��
	if (x == r && y == c) {
		cout << ans;
		return;
	}
	// ��и� �ȿ� ���� ��
	if (r < x + n && r >= x && c < y + n && c >= y) {
		int n4 = n / 2;
		solved(x, y, n4);
		solved(x, y + n4, n4);
		solved(x + n4, y, n4);
		solved(x + n4, y + n4, n4);
	}
	else {
		ans += n * n;
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> r >> c;
	solved(0, 0, 1 << n);
}
