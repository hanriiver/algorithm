#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <string>
#include <deque>
using namespace std;
int arr[500001];
int target[500001];
int n;
int lower_(int key) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (key == arr[mid]) {
			e = mid - 1;
			ans = mid;
		}
		else if (key < arr[mid]) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}
int upper_(int key) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (key == arr[mid]) {
			s = mid + 1;
			ans = mid;
		}
		else if (key < arr[mid]) {
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
	for (int i = 0; i < n; i++) cin >> arr[i];
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) cin >> target[i];
	sort(arr, arr + n);

	for (int i = 0; i < m; i++) {
		int lower = lower_(target[i]);
		int upper = upper_(target[i]);
		if (lower == -1) cout << 0 << " ";
		else cout << upper - lower + 1 << " ";
	}
}