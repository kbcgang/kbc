///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long a,b;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a==b) cout<<0<<"\n";
        else if(a>b)
        {
            if(a%2==b%2)
                cout<<1<<"\n";
            else cout<<2<<"\n";
        }
        else
        {
            if(a%2==b%2)
                cout<<2<<"\n";
            else cout<<1<<"\n";
        }
    }
}