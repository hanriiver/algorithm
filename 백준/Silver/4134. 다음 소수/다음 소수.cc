#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
bool isPrime(long long n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;

    for(long long i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        while(!isPrime(n)){
            n++;
        }
        cout<<n<<"\n";
    }
}
   