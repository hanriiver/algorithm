/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    while (1) {
        string s;
        stack<char> st1;
        bool flag = true;
        getline(cin, s);
        if (s[0] == '.' && s.length() == 1) {
            break;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[') {
                st1.push(s[i]);
            }
            else if (s[i] == '(') {
                st1.push(s[i]);
            }
            else if (s[i] == ']') {
                if (!st1.empty() && st1.top() == '[') {
                    st1.pop();
                }
                else {
                    flag = false;
                    break;
                }
            }
            else if (s[i] == ')') {
                if (!st1.empty() && st1.top() == '(') {
                    st1.pop();
                }
                else {
                    flag = false;
                    break;
                }
            }
        }
        if (flag && st1.empty()) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }


    }

}
