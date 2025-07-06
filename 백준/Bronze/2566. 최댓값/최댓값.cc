#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
int arr[9][9];
int x,y;
int ans;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            int t;
            cin>>t;
            if(ans<t){
                ans=t;
                x=i;
                y=j;
            }
        }
    }
    cout<<ans<<"\n"<<x+1<<" "<<y+1;
}