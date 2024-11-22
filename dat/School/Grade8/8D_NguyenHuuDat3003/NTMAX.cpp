#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s;
int dem,ans;
bool ktnt(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}
main()
{
    if(fopen("NTMAX.INP","r"))
    {
        freopen("NTMAX.INP","r",stdin);
        freopen("NTMAX.OUT","w",stdout);
    }
    getline(cin,s);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            dem++;

    }
    for(int i=0; i<s.size(); i++)
    {
        int t=0;
        if(s[i]>='1'&&s[i]<='9')
        {
            while(s[i]>='0'&&s[i]<='9')
            {
                t=t*10+(s[i]-48);
                i++;
            }
            if(ktnt(t))
                ans=max(t,ans);
        }
    }
    cout<<dem<<"\n"<<ans;
}
