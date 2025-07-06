#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
string s[5];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int max_size=0;
    for(int i=0;i<5;i++){
        cin>>s[i];
        max_size=max(max_size,(int)s[i].length());
    }
    for(int i=0;i<max_size;i++){
        for(int j=0;j<5;j++){
            if(s[j].size()>i){
                cout<<s[j][i];
            }
        }
    }
}