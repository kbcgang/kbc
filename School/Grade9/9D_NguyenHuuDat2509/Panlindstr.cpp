///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n,ans;
string s;
int check(int i,int j,string s)
{
    int m=0;
    while(i+m<=j-m)
    {
        if(s[i+m]!=s[j-m]) return 1;
        m++;
    }
    return j-i+1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Palindstr.inp","r")){
        freopen("Palindstr.inp","r",stdin);
        freopen("Palindstr.out","w",stdout);
    }
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            if(s[i]==s[j])
                ans=max(ans,check(i,j,s));
        }
    }
    cout<<ans;
}