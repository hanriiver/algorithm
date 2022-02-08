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
long long a, b, c;
long long go(long long a, long long b) {
    if (b == 1) {
        return a % c;
    }
    long long n2 = go(a, b / 2);
    n2 = (n2 * n2) % c;
    if (b & 1) n2 = (n2 * a) % c;
    return n2;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a, b);
}