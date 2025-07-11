#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
map<int,int> m1;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m1[x]++;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(m1[x]) cout<<1;
        else cout<<0;
        cout<<" ";
    }
}
