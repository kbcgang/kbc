///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
double x,MIN=INT_MAX,MAX=INT_MIN;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>x;
        MIN=min(MIN,x);
        MAX=max(MAX,x);
    }
    cout<<setprecision(2)<<fixed<<MAX<<' '<<MIN;
}