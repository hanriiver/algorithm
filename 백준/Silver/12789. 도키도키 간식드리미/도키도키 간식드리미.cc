#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
#include <queue>
using namespace std;
queue<int> qu;
stack<int> st;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        qu.push(x);
    }
    int out=1;
    while(!qu.empty()){
        if(qu.front()==out){
            qu.pop();
            out++;
            continue;
        }
        if(!st.empty()&&st.top()==out){
            st.pop();
            out++;
        }else{
            st.push(qu.front());
            qu.pop();
        }
    }
    bool flag=true;
    while(!st.empty()){
        if(out==st.top()){
            st.pop();
            out++;
        }else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"Nice";
    }else{
        cout<<"Sad";
    }
}
