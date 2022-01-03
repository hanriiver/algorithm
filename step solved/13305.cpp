#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
long long length[100001];
long long price[100001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> length[i];
    }
    long long min_price = 1000000001;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        if (min_price > price[i]) {
            min_price = price[i];
        }
        sum += length[i] * min_price;
    }
    cout << sum;
}