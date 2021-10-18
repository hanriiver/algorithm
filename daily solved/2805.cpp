#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int n, m;
long long ans;
int arr[1000001];
void binary() {
	int s = 1, e = 2000000000;
	while (s <= e) {
		long long mid = (s + e) / 2;
		long long slice = 0;
		for (int i = 0; i < n; i++) {
			if (mid < arr[i])
			{
				slice += (arr[i] - mid);
			}
		}
		if (slice >= m) {
			ans = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	binary();
	cout << ans;
}
