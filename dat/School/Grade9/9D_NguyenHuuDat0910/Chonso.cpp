///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long ans;
string s;
int dem[2];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Chonso.inp","r"))
    {
        freopen("Chonso.inp","r",stdin);
        freopen("Chonso.out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        dem[(s[s.size()-1])%2]++;
    }
    if(dem[1]%2==1)
    {
        cout<<(dem[0]*dem[1])+dem[1];
    }
    else
        cout<<(dem[1]-1)*dem[1]/2+dem[0]+(dem[0]-1)*dem[0]/2;
}