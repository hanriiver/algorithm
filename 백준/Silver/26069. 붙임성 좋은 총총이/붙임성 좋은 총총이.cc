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
    map<string,int> m1;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        if(a=="ChongChong"||b=="ChongChong"){
            m1.insert({a,1});
            m1.insert({b,1});
        }else{
            if(m1.find(a)!=m1.end()||m1.find(b)!=m1.end()){
                m1.insert({a,1});
                m1.insert({b,1});
            }
        }
    }
    cout<<m1.size();
}