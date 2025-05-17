#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int arr[1004];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    int m=0;
    int index=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(m<arr[i]){
            m=arr[i];
            index=i;
        }
    }
    double sum=0;
    for(int i=0;i<n;i++){
        double temp=(double)arr[i]/(double)m*(double)100;
        sum+=temp;
    }
    cout<<sum/(double)n;
}