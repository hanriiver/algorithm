#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, k;
int factorial(int num) {
	if (num == 0) {
		return 1;
	}
	int result = 1;
	for (int i = num; i >= 1; i--) {
		result *= i;
	}
	return result;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> k;
	int ans = factorial(n) / (factorial(k) * factorial(n - k));
	cout << ans;
}
