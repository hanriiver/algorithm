#include <iostream>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;
long long arr[10001];
int k, n;
void binnary_search() {
	long long left = 1, right = LLONG_MAX - 1;
	long long max = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long temp = 0;
		for (int i = 1; i <= k; i++) {
			temp += (arr[i] / mid);
		}
		if (temp >= n) {
			left = mid + 1;
			if (mid > max) {
				max = mid;
			}
		}
		else {
			right = mid - 1;
		}
	}
	cout << max;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	cin >> k >> n;
	for (int i = 1; i <= k; i++) cin >> arr[i];
	binnary_search();

}