#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int x,y;
    for(int i=-999;i<1000;i++){
        for(int j=-999;j<1000;j++){
            if((i*a+b*j==c)&&(i*d+j*e==f)){
                x=i,y=j;
                break;
            }
        }
    }
    cout<<x<<" "<<y;
}
