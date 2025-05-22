#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int arr[11];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	string s;
	cin >> s;
	int count = 2, ans = 0;
	for (int i = 1; i <= 10; i++) {
		arr[i] = count++;
	}
	for (int i = 0; i < s.size(); i++) {
		if ('A' <= s[i] && s[i] <= 'C') ans += arr[2];
		else if ('D' <= s[i] && s[i] <= 'F') ans += arr[3];
		else if ('G' <= s[i] && s[i] <= 'I') ans += arr[4];
		else if ('J' <= s[i] && s[i] <= 'L') ans += arr[5];
		else if ('M' <= s[i] && s[i] <= 'O') ans += arr[6];
		else if ('P' <= s[i] && s[i] <= 'S') ans += arr[7];
		else if ('T' <= s[i] && s[i] <= 'V') ans += arr[8];
		else if ('W' <= s[i] && s[i] <= 'Z') ans += arr[9];
	}
	cout << ans;
}