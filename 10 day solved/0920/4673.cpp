#include<bits/stdc++.h>
using namespace std;
int arr[10036];
int arr1[10036];
int selfn(int i) {
	int sum = i;
	while (i > 0) {
		sum += i % 10;
		i = i / 10;
	}
	return sum;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i = 1; i <= 10000; i++) {
		arr[i] = i;
		arr1[selfn(i)] = selfn(i);
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] != arr1[i]) cout << arr[i] << "\n";
	}
}
