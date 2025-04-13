///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t,l,r;
int uoc[1000005];
int db[1000005];
void make_div()
{
    for(int i=1;i<=1e6;i++)
    {
        for(int j=i;j<=1e6;j+=i)
        {
            uoc[j]++;
        }
    }
    for(int i=0;i<=1e6;i++)
    {
        db[i]=db[i-1]+bool(uoc[i]==4);
    }    
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    make_div();
    while(t--)
    {
        cin>>l>>r;
        cout<<db[r]-db[l-1]<<'\n';
    }
}