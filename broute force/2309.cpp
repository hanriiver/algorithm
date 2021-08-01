#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i = 1; i <= 9; i++) {
		cin >> arr[i];
	}
	sort(arr + 1, arr + 10);
	int sum = 0, twsum = 0, a, b;
	for (int i = 1; i <= 9; i++) sum += arr[i];
	for (int i = 1; i <= 8; i++) {
		for (int j = i + 1; j <= 9; j++) {
			twsum = arr[i] + arr[j];
			if (sum - twsum == 100) {
				a = i, b = j;
			}
		}
	}
	for (int i = 1; i <= 9; i++) {
		if (i == a || i == b) continue;
		else cout << arr[i] << "\n";
	}
}
//----------------------------------------//
#include <bits/stdc++.h>
using namespace std;
int a[9];
vector<int> v;
bool flag = false;
void go(int index, int size, int sum) {
    if (flag)return;
    if (size == 7) {
        if (sum == 100) {
            flag = true;
            sort(v.begin(), v.end());
            for (int i = 0; i < 7; i++)cout << v[i] << '\n';
        }
        return;
    }
    if (index > 8) {
        return;
    }
    go(index + 1, size, sum);
    if (flag)return;
    v.push_back(a[index]);
    go(index + 1, size + 1, sum + a[index]);
    if (flag)return;
    v.pop_back();
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for (int i = 0; i < 9; i++)cin >> a[i];
    go(0, 0, 0);
}