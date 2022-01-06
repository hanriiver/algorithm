#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[101];
int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) return b;
	return gcd(b, r);
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 1; i < n; i++) {
		int g = gcd(arr[0], arr[i]);
		cout << arr[0] / g << "/" << arr[i] / g << "\n";
	}
}