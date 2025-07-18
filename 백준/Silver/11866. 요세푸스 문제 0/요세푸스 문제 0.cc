/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<int> qu;
vector<int> v;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) qu.push(i);
    int index=1;
    while(!qu.empty()){
        if(index==k){
            v.push_back(qu.front());
            qu.pop();
            index=1;
            continue;
        }
        qu.push(qu.front());
        qu.pop();
        index++;
    }
    
    cout<<"<";
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1){
            cout<<v[i]<<">";
            break;
        }
        cout<<v[i]<<", ";
    }
}