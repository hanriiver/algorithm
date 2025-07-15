#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
long long arr[1000001];
bool check[1000001];
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
    for(int i=2;i<1000001;i++){
        if(isPrime(i)) arr[i]=1;
    }
    while(T--){
        int x;
        cin>>x;
        int cnt=0;
        for(int i=2;i<=x;i++){
            if(arr[i]&&!check[i]){
                if(arr[x-i]&&!check[x-i]) {
                    cnt++;
                    check[i]=true;
                    check[x-i]=true;
                }
            }
        }
        cout<<cnt<<"\n";
        for(int i=0;i<1000001;i++) check[i]=false;
    }
}
