#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while (1) {
		int sum = 0;
		int n;
		cin >> n;
		if (n == -1) break;
		vector<int> v;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				v.push_back(i);
			}
		}
		if (sum == n) {
			cout << n << " " << "=" << " ";
			for (int i = 0; i < v.size(); i++) {
				if (i == v.size() - 1) {
					cout << v[i];
				}
				else {
					cout << v[i] << " + ";
				}
			}
		}
		else {
			cout << n << " is NOT perfect.";
		}
		cout << "\n";
	}
}