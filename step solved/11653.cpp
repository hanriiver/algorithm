#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	if (n == 1) {
		return 0;
	}
	for (int i = 2; i <= n; i++) {
		while (1) {
			if (n % i == 0) {
				cout << i << "\n";
				n /= i;
			}
			else {
				break;
			}
		}
	}
}

