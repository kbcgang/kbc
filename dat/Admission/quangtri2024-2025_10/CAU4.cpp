///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n,res[9][10];
long a,ans;
void kien(long a)
{
    short pos=0;
    while(a>0)
    {
        res[pos][a%10]++;
        pos++;
        a/=10;
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        kien(a);
    }
    for(int i=0;i<9;i++)
        for(int j=0;j<10;j++)
            ans+=res[i][j]*(res[i][j]-1)/2;
    cout<<ans;
}