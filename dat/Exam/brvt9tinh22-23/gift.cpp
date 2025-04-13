///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
// #include<iostream>
// #include<ios>
// #include<climits>
// #include<map>
// #include<unordered_map>
// #include<array>
// #include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k,a[10005];
int d[10005];
void ChatGPT()
{
    for(int i=2;i<=n;i++)
        for(int j=1;j<i;j++)
            if(a[i]-a[j]>=k)
                d[i]=max(d[i],d[j]+1);
    cout<<*max_element(d+1,d+n+1)+1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    ChatGPT();
}