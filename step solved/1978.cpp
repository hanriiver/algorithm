#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int check[101];
int arr[1001];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> check[i];
	}
	for (int i = 2; i <= 1000; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= 1000; i++) {
		for (int j = i * i; j <= 1000; j += i) {
			if (arr[j] == 0) continue;
			arr[j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[check[i]] != 0) {
			ans++;
		}
	}
	cout << ans;
}

