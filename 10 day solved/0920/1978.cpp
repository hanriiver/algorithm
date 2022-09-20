#include<bits/stdc++.h>
using namespace std;
int check[101];
int arr[1001];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> check[i];
	for (int i = 2; i < 1001; i++) {
		arr[i] = i;
	}
	for (int i = 2; i < 1001; i++) {
		for (int j = i * i; j < 1001; j += i) {
			if (arr[j] == 0) continue;
			arr[j] = 0;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[check[i]]) {
			ans++;
		}
	}
	cout << ans;

}
