#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int a = min(w - x, x);
	int b = min(h - y, y);
	cout << min(a, b);
}

