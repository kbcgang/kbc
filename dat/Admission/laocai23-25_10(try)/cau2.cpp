///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<string>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string a;
int d;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a;
    for(int i=0;i<a.size();i++)
        if(a[i]<='9'&&a[i]>='0')
        {
            d++;
            while(a[i]<='9'&&i<a.size())
                i++;
        }
    cout<<d;
}