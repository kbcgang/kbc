///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
        string ans;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("SONN.inp","r"))
    {
        freopen("SONN.inp","r",stdin);
        freopen("SONN.out","w",stdout);
    }
    cin>>n;
    if(n<10)
        cout<<n;
    else
    {
        int s=0;
        for(int i=9;i>=1;i--)
        {
            s+=i;
            if(s==n)
            {
                cout<<i<<ans;
                exit(0);
            }
            if(s>n)
            {
                while(s>n)
                    {i--;
                    s--;}
                cout<<i<<ans;
                exit(0);
            }
            ans=char(i+48)+ans;
        }
    }
}