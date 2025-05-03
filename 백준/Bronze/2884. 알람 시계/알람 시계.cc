#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int h, m, time=0;
	cin >> h >> m;
	m -= 45;
	if (m < 0) {
		m += 60;
		h--;
		if (h < 0) {
			h += 24;
		}
	}
	cout << h << " " << m;
}