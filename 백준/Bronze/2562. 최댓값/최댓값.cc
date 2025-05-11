#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i = 1; i <= 9; i++) {
		cin >> arr[i];
	}
	int tmp = arr[1];
	int ans = 1;
	for (int i = 2; i <= 9; i++) {
		if (tmp < arr[i]) {
			tmp = arr[i];
			ans = i;
		}
	}
	cout << tmp<<"\n"<<ans;
}
