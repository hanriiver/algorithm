#include<bits/stdc++.h>
using namespace std;
deque<pair<int,int>> dq;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back({ x,i + 1 });
    }
    while (!dq.empty()) {
        int cnt = dq.front().first;
        cout << dq.front().second << " ";
        dq.pop_front();
        if (dq.empty()) break;
        if (cnt > 0) {
            for (int i = 0; i < cnt - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            cnt = -cnt;
            for (int i = 0; i < cnt; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
}