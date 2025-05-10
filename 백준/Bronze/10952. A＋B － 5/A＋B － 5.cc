#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    for(;;){
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0) break;
        cout<<a+b<<"\n";
    }
}