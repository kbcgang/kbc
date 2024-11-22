///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,a,b,x;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x;
        if(b<=0) cout<<0<<"\n";
        else
        {
            int n=pow(a,b);
            int m=n/x;
            if(abs(n-m*x)>abs(n-(m+1)*x)) m++;
            cout<<m*x<<"\n";
        }
    }
}
