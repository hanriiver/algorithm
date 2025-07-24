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
#include <math.h>
using namespace std;
int n;
int cnt;
long long fib(int n){
    if(n==1||n==2){
        cnt++;
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin>>n;
    fib(n);
    cout<<cnt<<"\n";
    int cnt1=0;
    for(int i=3;i<=n;i++) cnt1++;
    cout<<cnt1;
}