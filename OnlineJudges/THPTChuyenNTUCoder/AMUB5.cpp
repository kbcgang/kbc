///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    int x=a[a.size()-1]-48;
    if(b=="0")
    {
        cout<<1;
        exit(0);
    }
    if(x==1||x==5||x==0||x==6)
        cout<<x;
    else if(x==4||x==9)
        if(b[b.size()-1]&1)
            cout<<x;
        else cout<<x*x%10;
    else if(x==2||x==7||x==8)
    {
        int m=b[b.size()-2]*10+b[b.size()-1];
        int n=m/2;
        n/=2;
        n*=4;
        if(m-n==0)
            cout<<(x*x*x*x)%10;
        else if(m-n==1)
            cout<<x;
        else if(m-n==2)
            cout<<(x*x)%10;
        else
            cout<<(x*x*x)%10;
    }
}