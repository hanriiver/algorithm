#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
long long go(long long n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1 || n == 2) {
		return 1;
	}
	return go(n - 1) + go(n - 2);
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	cout << go(n);
}

