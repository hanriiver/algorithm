#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int cnt=10;
    int index=1;
    while(cnt--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int ans=0;
        for(int i=2;i<n-2;i++){
            if(v[i]>v[i-1]&&v[i]>v[i-2]&&v[i]>v[i+1]&&v[i]>v[i+2]){
                int temp=max({v[i-1],v[i-2],v[i+1],v[i+2]});
                ans+=v[i]-temp;
            }
        }
        cout<<"#"<<index++<<" "<<ans<<"\n";
    }
}