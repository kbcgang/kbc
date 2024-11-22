///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
short n,k;
long long gt(short n)
{
    long long s=1;
    for(int i=2;i<=n;i++)
        s*=i;
    return s;
}
int kq[30];
bool use[30];
void in()
{
    for(int i=1;i<=k;i++)
        cout<<kq[i]<<" ";
    if(kq[1]==n-k+1) exit(0);
    cout<<"\n";
}
void check(int i,int pos)
{
    for(int j=i;j<=n;j++)
    {
        if(use[j]==0&&j>kq[pos-1])
        {
            kq[pos]=j;
            use[j]=1;
            if(pos==k)
                in();
            else 
                check(i+1,pos+1);
            use[j]=0;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    cout<<gt(n)/(gt(k)*gt(n-k))<<"\n";
    check(1,1);
}