#include <bits/stdc++.h>
using namespace std; 
bool arr[1000001];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int m, n;
	cin >> m >> n;
	for (int i = 0; i <= n; i++) {
		arr[i] = true;
	}
	arr[0] = false;
	arr[1] = false;
	for (int i = 2; i <= n; i++) {
		if (arr[i]) {
			if (pow(i, 2) > 1000001)break;
			else {
				for (int j = pow(i, 2); j <= n;) {
					arr[j] = false;
					j += i;
				}
			}
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] == true) {
			cout << i << "\n";
		}
	}
}
 