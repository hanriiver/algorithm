#include <iostream>
using namespace std;
int arr[101];
int main()
{
    for(int i=1;i<=100;i++){
        arr[i]=i;
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}