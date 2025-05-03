#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0) cout << "1";
	else if (x > 0 && y < 0) cout << "4";
	else if (x < 0 && y>0) cout << "2";
	else cout << "3";
}