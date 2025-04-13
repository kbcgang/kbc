///Discipline > Motivation
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
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
    int a[n+5]={};
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<n-3;i++)
    {
        if(a[i]==a[i+1])
        {
            for(int j=i+2;j<n-1;j++)
                if(a[j]==a[j+1])
                {
                    cout<<(a[i]+a[j])*2;
                    exit(0);
                }
            cout<<-1;
            exit(0);
        }
    }
}