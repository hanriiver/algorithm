#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int n, answer = INT_MAX;
int arr[21][21];
vector<int> start, link;
void go(int index) {
	if (index == n) {
		if (start.size() == n / 2 && link.size() == n / 2) {
			int start_sum = 0, link_sum = 0;
			for (int i = 0; i < start.size(); i++) {
				for (int j = i + 1; j < start.size(); j++) {
					if (i == j) continue;
					start_sum += arr[start[i]][start[j]] + arr[start[j]][start[i]];
					link_sum += arr[link[i]][link[j]] + arr[link[j]][link[i]];
				}
			}
			int diff = abs(start_sum - link_sum);
			if (diff < answer) answer = diff;

		}
		return;
	}
	start.push_back(index);
	go(index + 1);

	start.pop_back();

	link.push_back(index);
	go(index + 1);

	link.pop_back();
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	go(0);
	cout << answer;
}