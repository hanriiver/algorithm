#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <string>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		deque<int> dq;
		int n;
		string p;
		cin >> p >> n;
		string arr;
		cin >> arr;
		string temp = "";
		bool flag = true;
		bool reverse_dq = false;
		bool first_error = true;
		if (n == 0) {
			for (int i = 0; i < p.size(); i++) {
				if (p[i] == 'D') {
					cout << "error" << "\n";
					first_error = false;
					break;
				}
			}
			if (first_error)
				cout << "[]" << "\n";
			continue;
		}
		for (int i = 0; i < arr.size(); i++) {
			if (i == arr.size() - 1) {
				dq.push_back(stoi(temp));
			}
			else if (arr[i] == ',') {
				dq.push_back(stoi(temp));
				temp = "";
			}
			else if (arr[i] == '[' || arr[i] == ']') continue;
			else temp += arr[i];
		}

		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') {
				if (reverse_dq) {
					reverse_dq = false;
				}
				else
					reverse_dq = true;
			}
			else {
				if (dq.empty()) {
					cout << "error" << "\n";
					flag = false;
					break;
				}
				else {
					if (reverse_dq) {
						dq.pop_back();
					}
					else dq.pop_front();
				}
			}
		}
		if (flag) {
			cout << "[";
			while (!dq.empty()) {
				if (reverse_dq) {
					cout << dq.back();
					dq.pop_back();
				}
				else {
					cout << dq.front();
					dq.pop_front();
				}
				if (!dq.empty())
					cout << ",";
			}
			cout << "]" << "\n";
		}

	}
}