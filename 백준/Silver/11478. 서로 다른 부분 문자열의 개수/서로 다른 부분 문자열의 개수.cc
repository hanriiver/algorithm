#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
map<string,int> m1;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=1;j<s.size();j++){
            int start=i;
            int len=j;
            string temp=s.substr(start,len);
            m1[temp]++;
        }
    }
    cout<<m1.size()+1;
}
