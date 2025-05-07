#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[7];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int p=0;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        arr[x]++;
    }
    int cnt=0,m=0;
    for(int i=1;i<7;i++){
        if(arr[i]==2){
            cnt=1000+i*100;
            break;
        }else if(arr[i]==3){
            cnt=10000+i*1000;
            break;
        }else if(arr[i]==1){
            m=max(m,i);
        }
    }
    if(cnt==0){
        cnt=m*100;
    }
    cout<<cnt;
}