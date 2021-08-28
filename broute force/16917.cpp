#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int a, b, c, x, y;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> a >> b >> c >> x >> y;
	int price1 = 0, price2 = 0;
	price1 = a * x + b * y; // 반반치킨 안사고 그냥 계산했을 경우
	if (x == y) price2 = x * 2 * c; //반반치킨으로 가격해결
	else if (x > y) price2 = min(y * 2 * c + (x - y) * a, y * 2 * c + (x - y) * 2 * c);
	// y만큼 반반으로 해결하고 남은x 구매하기 vs y만큼 반반으로 해결하고 남은x를 또 반반으로 해결하기
	else price2 = min(x * 2 * c + (y - x) * b, x * 2 * c + (y - x) * 2 * c);
	cout << min(price1, price2);
}