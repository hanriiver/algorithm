#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
vector<pair<int,int>> v;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto k:v){
        cout<<k.first<<" "<<k.second<<"\n";
    }
}
