#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
vector<pair<int,pair<int,string>>> v;
bool cmp(pair<int,pair<int,string>> a,pair<int,pair<int,string>> b){
    if(a.first==b.first){
        return a.second.first<b.second.first;
    }
    return a.first<b.first;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int age;
        string name;
        cin>>age>>name;
        v.push_back({age,{i,name}});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto k:v){
        cout<<k.first<<" "<<k.second.second<<"\n";
    }
}
