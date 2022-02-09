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
int psum[100001];
int arr[100001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        psum[i] = psum[i - 1] + arr[i];
    }
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        cout << psum[e] - psum[s - 1] << "\n";
    }
}