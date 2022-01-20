/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[101];
vector<int> ans;
int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int g = arr[1] - arr[0];
    for (int i = 2; i < n; i++) {
        g = gcd(g, arr[i] - arr[i - 1]);
    }
    for (int i = 2; i * i <= g; i++) {
        if (g % i == 0) {
            ans.push_back(i);
            ans.push_back(g / i);
        }
    }
    ans.push_back(g);
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
