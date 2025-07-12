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
map<int,int> m2;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        m1[x]++;
    }
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        m2[x]++;
    }
    int cnt1=a,cnt2=b;
    for(auto k:m2){
        if(m1.count(k.first)) cnt1--;
    }

    for(auto k:m1){
        if(m2.count(k.first)) cnt2--;
    }
    cout<<cnt1+cnt2;
}
