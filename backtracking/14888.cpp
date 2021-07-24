#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int n, max_ = INT_MIN, min_ = INT_MAX;
vector<int> arr;

int oper[4];
void go(int sum, int index) {
	if (index == n) {
		if (sum > max_) max_ = sum;
		if (sum < min_) min_ = sum;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (oper[i]) {
			if (i == 0) {
				oper[i]--;
				go(sum + arr[index], index + 1);
				oper[i]++;
			}
			else if (i == 1) {
				oper[i]--;
				go(sum - arr[index], index + 1);
				oper[i]++;
			}
			else if (i == 2) {
				oper[i]--;
				go(sum * arr[index], index + 1);
				oper[i]++;
			}
			else if (i == 3) {
				oper[i]--;
				go(sum / arr[index], index + 1);
				oper[i]++;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	for (int i = 0; i < 4; i++) cin >> oper[i];
	go(arr[0], 1);
	cout << max_ << "\n" << min_;
}