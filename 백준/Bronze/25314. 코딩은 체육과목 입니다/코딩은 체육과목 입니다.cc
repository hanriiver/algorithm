#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string ans="";
    n/=4;
    while(n--){
        ans+="long ";
    }
    ans+="int";
    cout<<ans;
}