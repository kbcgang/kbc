///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,n;
int check(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int t1=0,t2=0;
        cin>>n;
        t2=check(n);
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                int tam=check(i);
                while(n%i==0)
                {
                    t1+=tam;
                    n/=i;
                }
            }
        }
        if(n>1)
            t1+=check(n);
        if(t1==t2)
            cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}
