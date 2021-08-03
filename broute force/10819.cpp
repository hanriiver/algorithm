#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;
int n,ans=INT_MIN;
int arr[9];
vector<int> temp;
bool check[9];
void go(int index) {
    if (index == n) {
        int sum = 0;
        for (int i = 0; i < n-1; i++) { 
            int del = abs(temp[i] - temp[i + 1]);
            sum += del;
        }
        
        ans = max(ans, sum);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (check[i]) continue;
        check[i] = true;
        temp.push_back(arr[i]);
        go(index + 1);
        check[i] = false;
        temp.pop_back();
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    go(0);
    cout << ans;
}