#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m=b+c;
    int l=m/60;
    m%=60;
    if(a+l>23){
        l=a+l-24;
    }
    else{
        l+=a;
    }
    cout<<l<<" "<<m;
}