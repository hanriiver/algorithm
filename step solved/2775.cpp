#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int arr[16][16];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int k, n;
		cin >> k >> n;
		for (int i = 0; i <= k; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == 0 || j == 1) {
					arr[i][j] = j;
					continue;
				}
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
		cout << arr[k][n] << "\n";
	}
}

