#include <iostream>
using namespace std;

int main()
{
    long long x;
    long long sum=0;
    int n;
    cin>>x>>n;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        sum+=a*b;
    }
    if(x==sum){
        cout<<"Yes";
    }else cout<<"No";
}