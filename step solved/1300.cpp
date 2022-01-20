/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;
long long n, k;
long long ans;
void bs() {
    long long s = 1;
    long long e = n * n;
    while (s <= e) {
        long long mid = (s + e) / 2;
        long long cnt = 0;
        for (int i = 1; i <= n; i++) {
            cnt += min(mid / i, n);
        }
        if (cnt < k) {
            s = mid + 1;
        }
        else {
            ans = mid;
            e = mid - 1;
        }
    }
}
int main()
{
    cin >> n >> k;
    bs();
    cout << ans;
    return 0;
}