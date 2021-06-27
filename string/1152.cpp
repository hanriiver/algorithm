#include<bits/stdc++.h>
using namespace std;
// 공백의 개수를 카운트하여 단어의 개수를 출력
// 연속으로된 공백은 없다고 제시되어있음.
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	int ans = 0;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') ans++;
	}
	if (s[0] == ' ') ans--;
	if (s[s.size() - 1] == ' ')ans--;
	cout << ans + 1;
}
//-------------------------------------------------------------------
// 영어인지 아닌지 검사
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    getline(cin, s);
    int n = s.size(), cnt = 0;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z') {
            flag = true;
            if (i == n - 1) {
                cnt++;
            }
        }
        else {
            if (flag) cnt++;
            flag = false;
        }
    }
    cout << cnt;
}