#include<bits/stdc++.h>
using namespace std;
int arr[101][101];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int ans = 0;
	while (n--) {
		int a, b;
		cin >> a >> b;
		int ae = a + 10;
		int be = b + 10;
		for (int i = b; i < be; i++) {
			for (int j = a; j < ae; j++) {
				if (!arr[i][j]) {
					arr[i][j] = 1;
					ans++;
				}
			}
		}
	}
	cout << ans;
}