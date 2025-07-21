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
#include <math.h>
using namespace std;
int n;
string s[7000];
// 0~8 
void go(int y,int x,int size){
    if(size==1){
        s[y][x]='*';
        return;
    }
    int three=size/3;
    for(int i=y+three;i<y+three*2;i++){
        for(int j=x+three;j<x+three*2;j++){
            s[i][j]=' ';
        }
    }
    for(int dy=0;dy<3;dy++){
        for(int dx=0;dx<3;dx++){
            if(dy==1&&dx==1) continue;
            go(y+dy*three,x+dx*three,three);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin>>n;
    string tmp="";
    for(int i=0;i<n;i++) tmp+='*';
    for(int i=0;i<n;i++){
        s[i]=tmp;
    }
    go(0,0,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<s[i][j];
        }
        cout<<"\n";
    }
}