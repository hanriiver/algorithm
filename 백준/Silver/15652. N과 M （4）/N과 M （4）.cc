#include <bits/stdc++.h>
using namespace std;
int n, m;
bool check[9];
vector<int> v;
void go(int index,int start) {
    if (v.size() == m) {
        for (auto k : v) cout << k << " ";
        cout << "\n";
        return;
    }
    for (int i = index; i <= n; i++) {
        v.push_back(i);
        go(i,start+1);
        v.pop_back();
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    go(1,1);

}