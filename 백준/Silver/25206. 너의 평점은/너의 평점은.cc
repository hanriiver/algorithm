#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	double psum = 0, msum = 0;
	for (int i = 0; i < 20; i++) {
		string s, grade;
		double score;
		cin >> s >> score >> grade;
		 
		if (grade == "A+") {
			msum += 4.5 * score;
		}
		else if (grade == "A0") {
			msum += 4.0 * score;
		}
		else if (grade == "B+") {
			msum += 3.5 * score;
		}
		else if (grade == "B0") {
			msum += 3.0 * score;
		}
		else if (grade == "C+") {
			msum += 2.5 * score;
		}
		else if (grade == "C0") {
			msum += 2.0 * score;
		}
		else if (grade == "D+") {
			msum += 1.5 * score;
		}
		else if (grade == "D0") {
			msum += 1.0 * score;
		}
		else if (grade == "F") {
			msum += 0.0 * score;
		}
		else {
			continue;
		}
		psum += score;
	}
	double ans = 0.0;
	ans = msum / psum;
	cout << ans;
}