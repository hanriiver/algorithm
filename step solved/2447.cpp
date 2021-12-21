#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int n;
void go(int i, int j, int num) {

	if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
		cout << " ";
	}
	else if (num / 3 == 0) {
		cout << "*";
	}
	else go(i, j, num / 3);

	return;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			go(i, j, n);
		}
		cout << "\n";
	}
}

