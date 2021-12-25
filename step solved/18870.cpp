#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
vector<int> v, idx;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
		idx.push_back(x);
	}
	sort(idx.begin(), idx.end());
	idx.erase(unique(idx.begin(), idx.end()), idx.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(idx.begin(), idx.end(), v[i]) - idx.begin() << " ";
	}
}

