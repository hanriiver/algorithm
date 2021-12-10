#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int n, r, c, ans;

void solved(int x, int y, int n) {
	// 기저 사례 r , c 좌표에 부합할 시
	if (x == r && y == c) {
		cout << ans;
		return;
	}
	// 사분면 안에 있을 시
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
