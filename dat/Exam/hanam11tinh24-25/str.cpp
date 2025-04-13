///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<string>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string a;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    cin>>a;
    int d=0;
    // a[i]='a'
    // i='a'
    //=>a[i]=i
    for(int i=0;i<a.size();i++)
        if(a[i]!='0'&&a[i]!='1')
            d++;
    cout<<d;
}