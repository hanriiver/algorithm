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
using namespace std;
bool comp(pair<string,int> a,pair<string,int> b){
    if(a.second==b.second){
        if(a.first.size()==b.first.size()){
            return a.first<b.first;
        }
        return a.first.size()>b.first.size();
    }
    return a.second>b.second;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<string,int> m1;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.size()>=m){
            m1[s]++;
        }
    }
    vector<pair<string,int>> v;
    for(auto k:m1){
        v.push_back({k.first,k.second});
    }
    sort(v.begin(),v.end(),comp);
    for(auto k:v){
        cout<<k.first<<"\n";
    }

}