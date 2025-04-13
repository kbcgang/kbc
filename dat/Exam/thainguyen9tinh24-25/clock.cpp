///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int h,m,s,t;
void good()
{
    for(int i=0;i<t;i++)
    {
        s++;
        if(s==60)
            m++,s=0;
        if(m==60)
            h++,m=0;
        if(h==24)
            h=0;
    }
    cout<<h<<' '<<m<<' '<<s;
}
void bad()
{
    h+=t/3600;
    if(h==24) h=0;
    t%=3600;
    m+=t/60;
    t%=60;
    if(m>=60)
        h++,m%=60;
    s+=t;
    if(s>=60) m++,s%=60;
    if(m>=60)
        h++,m%=60;
    if(h==24) h=0;
    cout<<h<<' '<<m<<' '<<s;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>h>>m>>s>>t;
    bad();
}