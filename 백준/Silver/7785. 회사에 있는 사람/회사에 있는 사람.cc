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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        if(b=="enter"){
            m1[a]++;
        }else{
            m1[a]--;
        }
    }
    vector<string> v;
    for(auto k:m1){
        if(k.second>0) v.push_back(k.first);
    }
    sort(v.begin(),v.end(),greater<>());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
}
