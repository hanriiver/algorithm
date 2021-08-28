#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
string s;
int ans;
int go(string s, int index, char last) {
	if (index == s.size()) return 1;
	char start = (s[index] == 'c' ? 'a' : '0');
	char end = (s[index] == 'c' ? 'z' : '9');
	int ans = 0;
	for (int i = start; i <= end; i++) {
		if (i != last) {
			ans += go(s, index + 1, i);
		}
	}
	return ans;

}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> s;
	cout << go(s, 0, ' ');
}