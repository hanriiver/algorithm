#include <iostream>

#include <algorithm>

using namespace std;



const int MAX = 1000 + 1;



int N, K;

//idx, gold, silver, bronze

pair<pair<int, int>, pair<int, int>> medal[MAX];



bool cmp(pair<pair<int, int>, pair<int, int>> a, pair<pair<int, int>, pair<int, int>> b)

{

	//��

	if (a.first.second > b.first.second)

		return true;

	else if (a.first.second == b.first.second)

	{

		//��

		if (a.second.first > b.second.first)

			return true;

		else if (a.second.first == b.second.first)

			//��

			if (a.second.second > b.second.second)

				return true;

		//���� ��ũ�� ���� K��° ����

			else if (a.second.second == b.second.second)

				return a.first.first == K;

	}

	return false;

}



int main(void)

{

	ios_base::sync_with_stdio(0);

	cin.tie(0); //cin ����ӵ� ���

	cin >> N >> K;



	for (int i = 0; i < N;
		i++)

		cin
		>>
		medal[i].first.first >> medal[i].first.second >>
		medal[i].second.first >> medal[i].second.second;



	sort(medal,
		medal + N, cmp);



	for (int i = 0; i < N;
		i++)

		if (medal[i].first.first
			== K)

		{

			cout
				<< i + 1 << "\n";

			break;

		}

	return 0;

}