///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<string>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll c;
ll a,b,d;
string s;
int n,L;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>c;
    cin>>s;
    for(int r=0,l=0;r<=s.size();r++)
    {
        if(r==s.size())
        {
            if(a>0&&b>0)
                L=max(L,r-l);
            break;
        }
        if(s[r]=='a') a++;
        else if(s[r]=='b') d+=a,b++;
        if(d>c)
        {
            L=max(L,r-l);
            while(d>c&&l<=r)
            {
                if(s[l]=='a')
                {
                    d-=b;
                    a--;
                }
                else if(s[l]=='b')
                    b--;
                l++;
            }
        }
    }
    cout<<L;
}