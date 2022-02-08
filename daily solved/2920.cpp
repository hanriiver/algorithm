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
int arr[9];
char c[9] = { 'c','d','e','f','g','a','b','C' };

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string ret = "";
    for (int i = 0; i < 8; i++) {
        int n;
        cin >> n;
        ret += c[n - 1];
    }
    if (ret == "cdefgabC") {
        cout << "ascending";
    }
    else if (ret == "Cbagfedc") {
        cout << "descending";
    }
    else {
        cout << "mixed";
    }
}