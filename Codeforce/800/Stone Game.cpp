#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n,left_ans=0,right_ans=0,side_ans=0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int max_index = max_element(v.begin(), v.end()) - v.begin();
        int min_index = min_element(v.begin(), v.end()) - v.begin();
        if (max_index > min_index) {
            left_ans = max_index+1;
            right_ans = n - min_index;
            side_ans = n - max_index + min_index + 1;
        }
        else {
            left_ans = min_index + 1;
            right_ans = n - max_index;
            side_ans = n - min_index + max_index + 1;
        }
        cout << min({ left_ans,right_ans,side_ans })<<"\n";
         
    }
}