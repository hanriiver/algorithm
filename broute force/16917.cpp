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
	price1 = a * x + b * y; // �ݹ�ġŲ �Ȼ�� �׳� ������� ���
	if (x == y) price2 = x * 2 * c; //�ݹ�ġŲ���� �����ذ�
	else if (x > y) price2 = min(y * 2 * c + (x - y) * a, y * 2 * c + (x - y) * 2 * c);
	// y��ŭ �ݹ����� �ذ��ϰ� ����x �����ϱ� vs y��ŭ �ݹ����� �ذ��ϰ� ����x�� �� �ݹ����� �ذ��ϱ�
	else price2 = min(x * 2 * c + (y - x) * b, x * 2 * c + (y - x) * 2 * c);
	cout << min(price1, price2);
}