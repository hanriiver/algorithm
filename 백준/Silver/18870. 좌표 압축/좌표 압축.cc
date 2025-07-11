#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> vv;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        vv.push_back(-x);
    }
    sort(vv.begin(), vv.end());
    vv.erase(unique(vv.begin(), vv.end()), vv.end());
    for (int i = 0; i < n; i++) {
        cout << vv.end()-upper_bound(vv.begin(), vv.end(), -v[i])<<" ";
    }
}