#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
using namespace std;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
}
