#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
long long gcd(long long a, long long b){
    int r=a%b;
    if(r==0) return b;
    return gcd(b,r);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long mo=gcd(b,d);
    mo=b*d/mo; 
    a*=mo/b;
    c*=mo/d;
    int z=a+c;
    long long div=gcd(mo,z);
    cout<<z/div<<" "<<mo/div;
}
