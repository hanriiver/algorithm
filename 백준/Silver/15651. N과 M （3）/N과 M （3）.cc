#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
#include <queue>
#include <deque>
#include <math.h>
using namespace std;
int n,m;
bool check[9];
vector<int> tmp;
void go(vector<int>& a,int idx,int cnt){
    if(cnt==m){
        for(int i=0;i<tmp.size();i++){
            cout<<tmp[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=0;i<a.size();i++){
        tmp.push_back(a[i]);
        go(a,i,cnt+1);
        tmp.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin>>n>>m;
    vector<int> v;
    vector<int> tmp;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    go(v,0,0);
    
}