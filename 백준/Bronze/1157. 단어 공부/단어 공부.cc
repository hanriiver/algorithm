#include<bits/stdc++.h>
using namespace std;
int arr[27];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') {
			int index = 0;
			index = s[i] - 'A';
			arr[index] += 1;
		}
		if ('a' <= s[i] && s[i] <= 'z') {
			int index = 0;
			index = s[i] - 'a';
			arr[index] += 1;
		}
	}
	int tmp = 0;
	int idx = 0;
	int sameidx = 26;
	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0) continue;
		if (tmp < arr[i]) {
			tmp = arr[i];
			idx = i;
		}
		else if (tmp == arr[i]) sameidx = i;
	}
	int ans = 0;
	if (arr[idx] > arr[sameidx]) cout << (char)(idx+'A');
	else cout << "?";
}
