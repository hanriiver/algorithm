/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    while (1) {
        string s;
        cin >> s;
        if (s == "0") break;
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

    return 0;
}
