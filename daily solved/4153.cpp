#include <iostream>
#include <algorithm>
using namespace std;
int arr[3];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	while (1) {
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;
		sort(arr, arr + 3);
		int a = arr[0] * arr[0];
		int b = arr[1] * arr[1];
		int c = arr[2] * arr[2];
		if (a + b == c) {
			cout << "right" << "\n";
		}
		else cout << "wrong" << "\n";

	}
}
