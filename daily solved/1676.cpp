#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, count = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (i % 5 == 0) count++;
		if (i % 25 == 0) count++;
		if (i % 125 == 0) count++;
	}
	cout << count;
}
// add
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, ans = 0;
	cin >> n;
	if (n == 0) {
		cout << "0";
		return 0;
	}
	else {
		for (int i = 1; i <= n; i++) {
			int temp = i;
			while (temp % 5 == 0) {
				ans += 1;
				temp /= 5;
			}
		}
	}
	cout << ans;
}
