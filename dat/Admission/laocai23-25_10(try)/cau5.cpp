///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
int n,m,a[100005],b[100005];
bool fence(int x)
{
    int i=0,j=0;
    for(;i<n,j<m;i++, j++)
    {
        while(a[i]>=x&&i<n)
            i++;
        if(i==n)
            break;
        while(a[i]+b[j]<x&&j<m)
            j++;
        if(j==m)
            break;
    }
    while(a[i]>=x&&i<n)
        i++;
    return i==n;
}
void ChatGPT()
{
    int l=*min_element(a,a+n),r=1e9;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(fence(m))
            l=m+1;
        else r=m-1;
    }
    cout<<l-1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)cin>>b[i];
    ChatGPT();
}