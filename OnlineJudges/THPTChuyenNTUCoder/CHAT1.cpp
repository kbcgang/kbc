///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long x;
int t;
void chop(long long x)
{
    long long ans;
    int low=1,high=n;
    while(low<=high)
    {
        long long m=(low+high)/2;
        if(m*m+1==x)
        {
            cout<<m*m+1<<"\n";
            return;
        }
        else if(m*m+1>x)
        {
            ans=m*m+1;
            high=m-1;
        }
        else
            low=m+1;
    }
    cout<<ans<<"\n";
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cin>>t;
    while(t--)
    {
        cin>>x;
        chop(x);
    }
}