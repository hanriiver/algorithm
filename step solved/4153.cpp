#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int x, y, z;
	while (cin >> x >> y >> z) {
		if (x == 0 && y == 0 && z == 0) break;
		int max_length = max({ x,y,z });
		if (max_length == x) {
			if (pow(max_length, 2) == pow(y, 2) + pow(z, 2)) {
				cout << "right" << "\n";
				continue;
			}
		}
		else if (max_length == y) {
			if (pow(max_length, 2) == pow(x, 2) + pow(z, 2)) {
				cout << "right" << "\n";
				continue;
			}
		}
		else {
			if (pow(max_length, 2) == pow(x, 2) + pow(y, 2)) {
				cout << "right" << "\n";
				continue;
			}
		}
		cout << "wrong" << "\n";
	}
}

