#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, count = 0, num = 666;
	cin >> n;
	while (1) {

		string s = to_string(num);
		if (s.find("666") != -1) {
			count++;
		}
		if (n == count) {
			cout << s;
			break;
		}
		num++;
	}
}