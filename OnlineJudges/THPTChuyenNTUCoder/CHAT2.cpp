///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,t;
long long a[100005],x;
char check(long long x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==x)
            return 'Y';
        else if(a[mid]>x)
            high=mid-1;
        else low=mid+1;
    }
    return 'N';
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<check(x)<<"\n";
    }
}