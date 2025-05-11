#include <iostream>
using namespace std;
int arr[311];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a<0){
            a+=300;
        }
        arr[a]++;
    }
    int v;
    cin>>v;
    if(v<0){
        v+=300;
    }
    cout<<arr[v];
}