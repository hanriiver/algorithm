#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int bc(int n, int k) {
	if (n == k || k == 0) {
		return 1;
	}
	return bc(n - 1, k - 1) + bc(n - 1, k);
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n,k;
	cin >> n >> k;
	cout << bc(n, k);
}