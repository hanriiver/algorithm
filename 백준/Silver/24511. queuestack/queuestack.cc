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
deque<int> dq;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(v[i]==0){
            dq.push_back(x);
        }
    }
    int m;
    cin>>m;
    vector<int> vv;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        vv.push_back(x);
    }
    for(int i=0;i<m;i++){
        if(!dq.empty()){
            cout<<dq.back()<<" ";
            dq.pop_back();
            dq.push_front(vv[i]);
        }else{
            cout<<vv[i]<<" ";
        }
    }
}