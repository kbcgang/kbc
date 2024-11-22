///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
int check(int n)
{
    int s=0;
    while(n>0){
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
    cin>>n;
    for(int i=sqrt(n)-81;i<=sqrt(n);i++)
    {
        if(i*i+check(i)*i==n&&i>=0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}
