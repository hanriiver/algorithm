/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int dx = min(w - x, x);
    int dy = min(h - y, y);
    cout << min(dx, dy);
    return 0;
}
