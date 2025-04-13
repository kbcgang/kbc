///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
string a;
int d[10005];
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
    while(n--)
    {
        cin>>a;
        int s=0,t=0;
        for(auto i:a)
            if(i=='W'||i=='A'||i=='R')
            {
                s=max(s,t);
                t=0;
            }
            else t++;
        s=max(s,t);
        d[s]++;
    }
    for(int i=1e4;i>0;i--)
        if(d[i]>0){
            cout<<i<<" "<<d[i];
            exit(0);
        }
    cout<<"NO";
}