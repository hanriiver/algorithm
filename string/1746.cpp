#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<char> alpha;
int l, c;
void go(int index, int cnt, int ja, int mo, string s) {
	if (cnt == l) {
		if (mo >= 1 && ja >= 2) cout << s << "\n";
		return;
	} 
	if (index == c) return;
	if (alpha[index] == 'a' || alpha[index] == 'e' || alpha[index] == 'i' || alpha[index] == 'o' || alpha[index] == 'u') go(index + 1, cnt + 1, ja, mo + 1, s + alpha[index]);
	else go(index + 1, cnt + 1, ja + 1, mo, s + alpha[index]);
	go(index + 1, cnt, ja, mo, s);
}
int main() {
	cin >> l >> c;

	for (int i = 0; i < c; i++) {
		char c;
		cin >> c;
		alpha.push_back(c);
	}
	sort(alpha.begin(), alpha.end());
	go(0, 0, 0, 0, "");

}