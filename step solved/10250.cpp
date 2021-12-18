#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int h, w, n;
		cin >> h >> w >> n;
		int floor = n % h;
		int ho = n / h;
		if (floor == 0) {
			floor = h;
		}
		else {
			ho += 1;
		}
		cout << floor * 100 + ho << "\n";
	}
}

