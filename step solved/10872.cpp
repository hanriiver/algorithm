#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
long long go(long long n) {
	if (n <= 1) {
		return 1;
	}
	return go(n - 1) * n;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	cout << go(n);
}

