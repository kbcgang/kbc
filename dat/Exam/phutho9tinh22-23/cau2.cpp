///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,dit=1,chich;
int chim[1000005];
void Divisors()
{
    for(int i=1;i<=n/2;i++)
        for(int j=i*2;j<=n;j+=i)
            chim[j]++;
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
    cin>>n;
    Divisors();
    for(int i=1;i<=n;i++)
        if(chim[i]>chich)
            {dit=i;
            chich=chim[i];}
    cout<<dit;
}