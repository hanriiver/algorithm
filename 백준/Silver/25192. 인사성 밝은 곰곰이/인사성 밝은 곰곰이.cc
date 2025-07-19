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
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    set<string> set1;
    vector<int> v;
    int ecnt=1;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="ENTER"){
            if(i==0) continue;
            v.push_back(set1.size());
            ecnt++;
            set1.clear();
        }else{
            set1.insert(s);
        }
    }
    int ans=0;
    for(auto k:v){
        ans+=k;
    }
    if(ecnt==v.size()) cout<<ans;
    else cout<<ans+set1.size();
}