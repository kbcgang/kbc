///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int q;
string s;
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
    cin>>q;
    while(q--)
    {
        int a=0,b=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a') a++;else b++;
        }
        if(a==b)cout<<2<<"\n";
        else cout<<1<<"\n";
    }
}