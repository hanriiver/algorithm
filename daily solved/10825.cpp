#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;
struct person {
	string name;
	int kor;
	int math;
	int eng;
};
struct person p[100001];
bool cmp(person a, person b) {
	if (a.kor == b.kor) {
		if (a.eng == b.eng) {
			if (a.math == b.math) {
				return a.name < b.name;
			}
			else {
				return a.math > b.math;
			}
		}
		else {
			return a.eng < b.eng;
		}
	}
	else {
		return a.kor > b.kor;
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i].name >> p[i].kor >> p[i].eng >> p[i].math;
	}
	sort(p, p + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << p[i].name << "\n";
	}
}
