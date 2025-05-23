#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s,temp;
    cin >> s;
    temp = s;
    reverse(temp.begin(), temp.end());
     
    if (s==temp) {
        cout << 1;
    }
    else cout << 0;
}