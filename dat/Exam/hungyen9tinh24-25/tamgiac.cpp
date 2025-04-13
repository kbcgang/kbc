///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int a,b,c;
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
    cin>>a>>b>>c;
    if(a+b+c==180&&a>0&&b>0&&c>0)
    {
        if(a==90||b==90||c==90)
            cout<<"VUONG";
        else if(a<90&&b<90&&c<90)
            cout<<"NHON";
        else if(a>90||b>90||c>90)
            cout<<"TU";
    }
    else cout<<"KHONG";
}