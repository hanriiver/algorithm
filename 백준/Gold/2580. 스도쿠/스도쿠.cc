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
int arr[10][10];
vector<pair<int,int>> v;
bool check(int y,int x,int value){
    // 가로체크
    for(int i=0;i<9;i++){
        if(arr[y][i]==value) return false;
    }
    // 세로체크
    for(int i=0;i<9;i++){
        if(arr[i][x]==value) return false;
    }
    // 3x3 체크
    int oy=(y/3)*3;
    int ox=(x/3)*3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int ny=oy+i;
            int nx=ox+j;
            if(arr[ny][nx]==value) return false;
        }
    }
    return true;
}
void go(int n){
    if(n==v.size()){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        exit(0);
    }
    int y=v[n].first;
    int x=v[n].second;
    for(int i=1;i<=9;i++){
        if(check(y,x,i)){
            arr[y][x]=i;
            go(n+1);
            arr[y][x]=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                v.push_back({i,j});
            }
        }
    }
    go(0);
}