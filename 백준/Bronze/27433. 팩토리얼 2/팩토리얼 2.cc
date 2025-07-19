#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
#include <queue>
#include <deque>
using namespace std;
long long fibo(int n){
    if(n<=1) return 1;
    return n*fibo(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    cout<<fibo(n);
}