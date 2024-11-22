///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int g,s,k,n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>g>>s>>k;
    int t=g*493+s*29+k;
    cin>>n;
    while(n--)
    {
        int p,q,r;
        cin>>p>>q>>r;
        int price=p*493+q*29+r;
        if(price>t)
        {
            cout<<-1;
            exit(0);
        }
        t-=price;
    }
    cout<<t/493<<" ";
    t-=(t/493)*493;
    cout<<t/29<<" ";
    t-=(t/29)*29;
    cout<<t;
}