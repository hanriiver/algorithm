#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	string s, temp = "";
	cin >> s;
	int answer = 0;
	bool flag = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-' || s[i] == '+') {
			if (flag) answer -= stoi(temp);
			else answer += stoi(temp);
			temp = "";
			if (s[i] == '-') flag = true;
		}
		else {
			temp += s[i];
		}
	}
	if (flag) answer -= stoi(temp);
	else answer += stoi(temp);
	cout << answer;
}
