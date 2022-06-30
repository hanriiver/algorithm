#include <bits/stdc++.h>
using namespace std;
int arr[26];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int index = s[i] - 'a';
        arr[index]++;
    }
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
}