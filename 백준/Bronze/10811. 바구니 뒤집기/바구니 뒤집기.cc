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
        int c=(b-a+1)/2;
        if(a==b) continue;
        for(int j=0;j<c;j++){
            int temp=arr[b];
            arr[b]=arr[a];
            arr[a]=temp;
            b--;
            a++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}