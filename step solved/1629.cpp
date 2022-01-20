#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
using namespace std;
long long a, b, c;
long long bs(long long num, long long e) {
    if (e == 0) return 1;
    if (e == 1) return num % c;
    long long n2 = bs(num, e / 2);

    if (e % 2 == 0) {
        return n2 * n2 % c;
    }
    else {
        return n2 * n2 % c * num % c;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> a >> b >> c;
    cout << bs(a, b);

}