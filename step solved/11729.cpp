#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
void go(int from, int to, int n) {
	int middle = 6 - from - to;
	if (n == 1) {
		cout << from << " " << to << "\n";
		return;
	}
	if (n >= 2) {
		go(from, middle, n - 1);
		go(from, to, 1);
		go(middle, to, n - 1);

	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n";
	go(1, 3, n);
}

