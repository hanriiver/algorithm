#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	long long a, b, v;
	cin >> a >> b >> v;

	long long dif = a - b;
	long long last = v - a;
	long long ans = last / dif;
	if (last % dif) ans++;
	cout << ans + 1;
}
