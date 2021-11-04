#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int h, w, n;
		int floor, room;
		cin >> h >> w >> n;
		floor = n % h;
		if (floor == 0) {
			floor = h;
			room = n / h;
		}
		else room = (n / h) + 1;
		cout << floor * 100 + room << "\n";
	}
}
