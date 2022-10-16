#include<bits/stdc++.h>
using namespace std;
int arr[51][4];
string s[1001];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	string ans = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] == 'A') {
				arr[j][0]++;
			}
			else if (s[i][j] == 'C') {
				arr[j][1]++;
			}
			else if (s[i][j] == 'G') {
				arr[j][2]++;
			}
			else arr[j][3]++;
		}
	}
	int count = 0;
	for (int i = 0; i < m; i++) {
		int max = 0;
		int idx = 0;
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				idx = j;
			}
		}
		count += n - max;
		if (idx == 0) {
			ans += 'A';
		}
		else if (idx == 1) {
			ans += 'C';
		}
		else if (idx == 2) {
			ans += 'G';
		}
		else {
			ans += 'T';
		}
	}
	cout << ans << "\n" << count;
}