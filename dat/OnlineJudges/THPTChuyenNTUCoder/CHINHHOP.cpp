///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
short k,n;
short kq[10];
bool use[10];
void in()
{
    for(int i=1;i<=k;i++)
        cout<<kq[i]<<" ";
    cout<<"\n";
}
void check(short pos)
{
    for(short i=1;i<=n;i++)
        if(use[i]==0)
        {
            kq[pos]=i;
            use[i]=1;
            if(pos==k)
                in();
            else check(pos+1);
            use[i]=0;
        }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k>>n;
    check(1);
}