#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;
int arr[100001];
int target[100001];

void bs(int n, int m) {
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (target[m] == arr[mid]) {
			cout << 1 << "\n";
			return;
		}
		if (target[m] < arr[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	cout << 0 << "\n";
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) cin >> target[i];
	sort(arr, arr + n);
	for (int i = 0; i < m; i++) {
		bs(n, i);
	}
}