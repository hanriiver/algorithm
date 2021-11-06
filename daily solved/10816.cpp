#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[500001];
int arr1[500001];
int result[500001];
int n, m;
int lower_binary(int x) {
	int s = 0, e = n - 1;
	int mid;
	int ans = -1;
	while (s <= e) {
		mid = (s + e) / 2;
		if (arr[mid] == x) {
			e = mid - 1;
			ans = mid;
		}
		else if (arr[mid] > x) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}
int upper_binary(int x) {
	int s = 0, e = n - 1;
	int mid;
	int ans = -1;
	while (s <= e) {
		mid = (s + e) / 2;
		if (arr[mid] == x) {
			s = mid + 1;
			ans = mid;
		}
		else if (arr[mid] > x) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr1[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < m; i++) {
		int lower = lower_binary(arr1[i]);
		int upper = upper_binary(arr1[i]);
		if (lower == -1) {
			result[i] = 0;
		}
		else {
			result[i] = upper - lower + 1;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << result[i] << " ";
	}
}
