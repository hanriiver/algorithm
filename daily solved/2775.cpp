#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int arr[15][15];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (i == 0 || j == 0) {
				arr[i][j] = j + 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}

	while (T--) {
		int k, n;
		cin >> k >> n;
		cout << arr[k][n - 1] << "\n";
	}
}
