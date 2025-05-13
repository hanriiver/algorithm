#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int arr[51];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        arr[x%42]++;
    }
    int ans=0;
    for(int i=0;i<43;i++){
        if(arr[i]) ans++;
    }
    cout<<ans;
}