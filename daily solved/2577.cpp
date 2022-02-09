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
int arr[10];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long ret = 0;
    long long a, b, c;
    cin >> a >> b >> c;
    ret = a * b * c;
    while (ret > 0) {
        arr[ret % 10]++;
        ret /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\n";
    }
}