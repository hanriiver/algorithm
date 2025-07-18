/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;
queue<int> qu;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        qu.push(i);
    }
    while(qu.size()>1){
        qu.pop();
        int x=qu.front();
        qu.pop();
        qu.push(x);
    }
    cout<<qu.front();
}