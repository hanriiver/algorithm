#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int arr[1000001];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int m, n;
	cin >> m >> n;
	for (int i = 2; i <= n; i++) arr[i] = i;
	for (int i = 2; i <= n; i++) {
		for (int j = i + i; j <= n; j += i) {
			if (arr[j] == 0) continue;
			arr[j] = 0;
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] != 0) {
			cout << arr[i] << "\n";
		}
	}
}

