///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k;
int a[100005],b[100005];
int tu,mau;
bool compare(pair<long double,int> a,pair<long double,int> b)
{
    return a.first>=b.first;
}
bool check(long double x)
{
    long double c[n+1];
    for(int i=0;i<n;i++)
        c[i]=1.0*a[i]-b[i]*x;
    sort(c,c+n,greater<double>());
    double s=0;
    for(int i=0;i<k;i++)
        s+=c[i];
    return s>=0;
}
void getMax(long double x)
{
    tu=0,mau=0;
    pair<long double,int> c[n+1];
    for(int i=0;i<n;i++)
    {
        c[i].first=1.0*a[i]-b[i]*x;
        c[i].second=i;
    }
    sort(c,c+n,compare);
    for(int i=0;i<k;i++)
    {
        tu+=a[c[i].second];
        mau+=b[c[i].second];
    }
    int t=__gcd(tu,mau);
    tu/=t;
    mau/=t;
}
void ChatGPT()
{
    long double l=0,r=1e7;
    while(r-l>=1e-7)
    {
        long double m=(l+r)/2;
        if(check(m))
        {
            l=m;
            getMax(m);
        }
        else r=m;
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
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    ChatGPT();
    cout<<tu<<" "<<mau;
}