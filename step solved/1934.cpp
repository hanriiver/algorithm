#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) return b;
	return gcd(b, r);
}
int lcm(int a, int b, int g) {
	return g * (a / g) * (b / g);
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int a, b;
		cin >> a >> b;
		int g = gcd(a, b);
		int l = lcm(a, b, g);
		cout << l << "\n";
	}
}