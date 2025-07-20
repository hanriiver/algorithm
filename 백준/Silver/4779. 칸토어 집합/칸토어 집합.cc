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
void div(string& s,int start,int end){
    int len=end-start+1;
    if(len<3) return;
    int three=len/3;
    for(int i=start+three;i<start+three*2;i++){
        s[i]=' ';
    }
    div(s,start,start+three-1);
    div(s,start+three*2,end);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    while(cin>>n){
        int num=pow(3,n);
        string s;
        for(int i=0;i<num;i++){
            s+='-';
        }
        div(s,0,num-1);
        cout<<s<<"\n";
    }
}