#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
#include <queue>
#include <memory.h>
#include <map>
using namespace std;
bool check[1000001];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        priority_queue<pair<int, int>> pq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq1;
        int num, cnt = 0;
        cin >> num;
        for (int i = 0; i < num; i++) {
            char c;
            int n;
            cin >> c >> n;
            if (c == 'I') {
                pq.push({ n,cnt });
                pq1.push({ n,cnt });
                cnt++;
            }
            else {
                if (n == 1) {
                    while (!pq.empty() && check[pq.top().second])
                        pq.pop();
                    if (!pq.empty()) {
                        check[pq.top().second] = true;
                        pq.pop();
                    }

                }
                if (n == -1) {
                    while (!pq1.empty() && check[pq1.top().second])
                        pq1.pop();
                    if (!pq1.empty()) {
                        check[pq1.top().second] = true;
                        pq1.pop();
                    }

                }
            }
        }
        while (!pq.empty() && check[pq.top().second]) pq.pop();
        while (!pq1.empty() && check[pq1.top().second]) pq1.pop();
        if (pq.empty() || pq1.empty()) {
            cout << "EMPTY" << "\n";
        }
        else {
            cout << pq.top().first << " " << pq1.top().first << "\n";
        }
        memset(check, false, sizeof(check));
    }
}