/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int arr[1000001];
vector<int> v;
void bs(int num) {
    int s = 0;
    int e = v.size() - 1;
    int ret = 987654321;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (v[mid] >= num) {
            if (ret > mid) {
                ret = mid;
            }
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    v[ret] = num;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    v.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        if (v.back() < arr[i]) {
            v.push_back(arr[i]);
        }
        else {
            bs(arr[i]);
        }
    }
    cout << v.size();
}