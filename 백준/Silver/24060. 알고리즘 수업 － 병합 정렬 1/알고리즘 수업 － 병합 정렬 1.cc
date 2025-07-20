#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <iomanip>
#include <set>
#include <queue>
#include <deque>
using namespace std;
int n,k,cnt=0;
int ans=-1;
vector<int> a;
vector<int> tmp;
void merge(vector<int>& a,int start,int end,int mid){
    int i=start;
    int j=mid+1;
    int t=start;
    while(i<=mid&&j<=end){
        if(a[i]<=a[j]) tmp[t++]=a[i++];
        else tmp[t++]=a[j++];
    }

    while(i<=mid) tmp[t++]=a[i++];
    while(j<=end) tmp[t++]=a[j++];

    for(int i=start;i<=end;i++){
        a[i]=tmp[i];
        cnt++;
        if(cnt==k) ans=a[i];
    }
}
void merge_sort(vector<int>& a,int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,end,mid);
    }
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    tmp.resize(n);
    merge_sort(a,0,n-1);
    cout<<ans;
}