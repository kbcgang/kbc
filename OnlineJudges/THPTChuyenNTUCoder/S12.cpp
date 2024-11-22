#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string n;
string s;
char nis(string s)
{
    int n=0;
    for(int i=0;i<s.size();i++)
        n=n*10+(s[i]-48);
    return n;
}
main()
{
    if(fopen("S12.INP","r"))
    {
        freopen("S12.INP","r",stdin);
        freopen("S12.OUT","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n.size();i++){
        string x;
        if(n[i]=='1'){
            for(int j=i;j<i+3;j++)
                x+=n[j];
            cout<<nis(x);
            i+=2;
        }
        else if(n[i]=='9'){
            for(int j=i;j<i+2;j++)
                x+=n[j];
            cout<<nis(x);
            i++;
        }
    }

}
