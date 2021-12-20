#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		double distance = r1 > r2 ? r1 - r2 : r2 - r1;
		if (d == 0 && r1 == r2) {
			cout << -1;
		}
		else if (distance < d && d < r1 + r2) {
			cout << 2;
		}
		else if (d == r1 + r2 || d == distance) {
			cout << 1;
		}
		else cout << 0;
		cout << "\n";

	}
}

