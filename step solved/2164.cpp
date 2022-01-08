#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;
queue<int> qu;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) qu.push(i);
	while (qu.size() > 1) {
		qu.pop();
		int temp = qu.front();
		qu.pop();
		qu.push(temp);
	}
	cout << qu.front();
}