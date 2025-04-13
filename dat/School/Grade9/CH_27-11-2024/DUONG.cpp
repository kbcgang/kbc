///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
long long ans=LLONG_MAX;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n==1||n==2||n==4||n==7)
        cout<<-1;
    else
    {
        if(n%5==0)
            cout<<n/5;
        else if(n%5==1)
            cout<<(n-6)/5+2;
        else if(n%5==2)
            cout<<(n-12)/5+4;
        else if(n%5==3)
            cout<<(n-3)/5+1;
        else if(n%5==4)
            cout<<(n-9)/5+3;
    }
    // cout<<"\n";
    // int five=n/5;
    // n-=5*five;
    // int three=n/3;
    // n-=3*three;
    // if(n>0) cout<<-1;
    // else cout<<five+three;
}