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
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int ret = 0;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        ret += pow(n, 2);
    }
    cout << ret % 10;
}