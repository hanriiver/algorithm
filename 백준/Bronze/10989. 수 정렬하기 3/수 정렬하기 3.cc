#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
int a[10001];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<10001;i++){
        if(a[i]){
            int cnt=a[i];
            for(int j=0;j<cnt;j++){
                cout<<i<<"\n";
            }
        }
    }
}
