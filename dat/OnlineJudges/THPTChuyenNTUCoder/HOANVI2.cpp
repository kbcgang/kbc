///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int kq[40];
bool use[50];
short n;
void in()
{
    for(int i=1;i<=n;i++)
        cout<<kq[i]<<" ";
    cout<<"\n";
}
void check(int pos)
{
    for(int i=n;i>0;i--)
        if(use[i]==0)
        {
            kq[pos]=i;
            use[i]=1;
            if(pos==n)
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
    cin>>n;
    check(1);
}
