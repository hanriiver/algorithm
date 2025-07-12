#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
int arr[500001];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        cout<<upper_bound(arr,arr+n,x)-lower_bound(arr,arr+n,x)<<" ";
    }
}
