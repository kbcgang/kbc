#include<bits/stdc++.h>
using namespace std;
int t;
string n;
bool scp(long n)
{
    long m=sqrt(n);
    if(m*m==n)
        return 1;
    else return 0;
}
main()
{
    if(fopen("bai3.inp","r"))
    {
        freopen("bai3.inp","r",stdin);
        freopen("bai3.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        long s=0;
        for(int i=0;i<n.size();i++)
            s+=n[i]-48;
        cout<<scp(s)<<"\n";
    }
}
