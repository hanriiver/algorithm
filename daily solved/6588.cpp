#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector<int> prime;
bool check[1000001];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	for (long long i = 2; i <= 1000000; i++) {
		if (check[i]) continue;
		prime.push_back(i);
		for (long long j = i * i; j <= 1000000; j += i) {
			check[j] = true;
		}
	}
	while (1) {
		int n;
		cin >> n;
		if (n == 0) break;
		int n2 = n / 2;
		for (int i = 0; i < n2; i++) {
			int diff = n - prime[i];
			if (!check[diff]) {
				cout << n << " = " << prime[i] << " + " << diff;
				break;
			}
		}
		cout << "\n";
	}
}
