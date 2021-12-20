#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int arr[10001];

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 1; i <= 10000; i++) arr[i] = i;
	for (int i = 2; i <= 10000; i++) {
		for (int j = i + i; j <= 10000; j += i) {
			if (arr[j] == 0) continue;
			arr[j] = 0;
		}
	}
	while (T--) {
		int n;
		cin >> n;
		for (int i = n / 2; i > 0; i--) {
			if (arr[i] != 0 && arr[n - i] != 0) {
				cout << i << " " << n - i << "\n";
				break;
			}
		}
	}
}

