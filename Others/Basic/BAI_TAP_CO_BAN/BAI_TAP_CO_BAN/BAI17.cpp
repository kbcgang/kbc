///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,x;
int MIN=INT_MAX,MAX=INT_MIN;
int t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        t+=x;
        MIN=min(MIN,x);
        MAX=max(MAX,x);
    }
    cout<<t<<"\n"<<1.0*t/n<<"\n"<<MIN<<"\n"<<MAX;
}
