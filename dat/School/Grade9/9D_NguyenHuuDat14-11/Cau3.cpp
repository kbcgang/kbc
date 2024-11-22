///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,ans;
map<long,int> dem;
long c[100005];
kien()
{
    if(fopen("Cau3.inp","r"))
    {
        freopen("Cau3.inp","r",stdin);
        freopen("Cau3.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
    {
        dem[c[i]]++;
        ans+=dem[c[i]]/2;
        dem[c[i]]=dem[c[i]]%2;
    }
    cout<<ans;
}