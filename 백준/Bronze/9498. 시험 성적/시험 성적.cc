#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int a;
    cin >> a;
    if (90 <= a && a <= 100)
        cout << "A";
    else if (80 <= a && a < 90)
        cout << "B";
    else if (70 <= a && a < 80)
        cout << "C";
    else if (60 <= a && a < 70)
        cout << "D";
    else
        cout << "F";
}