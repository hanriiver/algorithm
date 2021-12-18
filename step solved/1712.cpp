#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	long long a, b, c;
	cin >> a >> b >> c;
	if (b >= c) {
		cout << -1;
	}
	else {
		long long benefit = c - b;
		cout << a / benefit + 1;
	}
}

