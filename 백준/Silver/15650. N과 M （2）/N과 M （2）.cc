#include <bits/stdc++.h>
using namespace std;
int n, m;
bool check[9];
vector<int> v;
void go(int index) {
    if (v.size() == m) {
        for (auto k : v) cout << k << " ";
        cout << "\n";
    }
    for (int i = index; i <= n; i++) {
        if (check[i]) continue;
        check[i] = true;
        v.push_back(i);
        go(i);
        v.pop_back();
        check[i] = false;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    go(1);

}