#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	long long a, b, v;
	cin >> a >> b >> v;
	long long day = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0) {
		day++;
	}
	cout << day;
}

