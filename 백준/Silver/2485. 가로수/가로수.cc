#include<bits/stdc++.h>
using namespace std;
int n;
long long arr[100001];
vector<long long> v;
long long gcd(long long a, long long b) {
    for (; b; a %= b, swap(a, b));
    return a;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 1; i < n; i++) {
        v.push_back(arr[i] - arr[i - 1]);
    }
    long long min_num = v[0];
    for (int i = 1; i < v.size(); i++) {
        min_num = gcd(min_num,v[i]);
    }
    long long ret = 0;
    for (int i = 0; i < v.size(); i++) {
        ret += (v[i] / min_num - 1);
    }
    cout << ret;
}