#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[8001];
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, sum = 0, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
		v.push_back(x);
		arr[x + 4000]++;
	}
	int flag;
	for (int i = 0; i < 8001; i++) {
		if (arr[i] > cnt) {
			cnt = arr[i];
			flag = i;
		}
	}
	for (int i = flag + 1; i < 8001; i++) {
		if (arr[i] == cnt) {
			flag = i;
			break;
		}
	}
	cout << round(sum / (double)n) << "\n"; //»ê¼úÆò±Õ
	sort(v.begin(), v.end());
	cout << v[n / 2] << "\n"; //Áß¾Ó°ª
	cout << flag - 4000 << "\n";
	cout << v[n - 1] - v[0] << "\n";

}

