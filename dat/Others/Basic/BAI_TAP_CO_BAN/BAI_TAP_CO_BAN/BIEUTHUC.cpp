///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int a,b,c,t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<max({a-b-c,a-b+c,a-(b-c),a-(b+c),a+b-c,a+b+c,a*b-c,a*b+c,a*(b-c),a*(b+c),
                  a-b*c,a+b*c,(a+b)*c,(a-b)*c,a*b*c})<<"\n";
    }
}
