#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
int arr[5];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int sum=0;
    for(int i=0;i<5;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+5);
    cout<<sum/5<<"\n"<<arr[5/2];
}
