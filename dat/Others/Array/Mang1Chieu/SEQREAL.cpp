///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
float x,t,td,ta,tc,tl;
int n;
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
        if(x>0) td+=x;
        else ta+=x;
        if(i%2==1) tc+=x;
        else tl+=x;
    }
    cout<<setprecision(2)<<fixed<<t<<' '<<ta<<' '<<td<<' '<<tc<<' '<<tl;
}