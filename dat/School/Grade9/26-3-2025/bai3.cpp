///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<string>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string a;
int d[30],ans,p;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a;
    int l=0;
    for(int r=0;r<a.size();r++)
    {
        d[a[r]-65]++;
        if(d[a[r]-65]==2)
        {
            if(r-l>ans)
            {
                ans=r-l;
                p=l+1;
            }
            while(d[a[r]-65]==2)
                d[a[l++]-65]--;
        }
    }
    if(a.size()-l>ans)
    {
        ans=a.size()-l;
        p=l+1;
    }
    cout<<p<<' '<<ans;
}