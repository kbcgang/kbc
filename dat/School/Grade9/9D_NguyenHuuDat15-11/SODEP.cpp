///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string n;
long long s;
kien()
{
    if(fopen("SODEP.inp","r"))
    {
        freopen("SODEP.inp","r",stdin);
        freopen("SODEP.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n.size();i++)
        s+=n[i]-48;
    if(s%n.size()==0)
        cout<<1;
    else cout<<0;
}