#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	int five_ = 0;
	if (n == 0) {
		cout << 0;
	}
	else {
		for (int i = 1; i <= n; i++) {
			int temp = i;
			while (temp % 5 == 0) {
				five_++;
				temp /= 5;
			}
		}
		cout << five_;
	}
}