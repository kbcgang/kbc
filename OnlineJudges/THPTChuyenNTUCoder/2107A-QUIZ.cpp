#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,dem;
char k[1005];
main()
{
    if(fopen("2107A - QUIZ.inp","r"))
    {
        freopen("2107A - QUIZ.inp","r",stdin);
        freopen("2107A - QUIZ.out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)cin>>k[i];
    for(int i=0;i<n-1;i++)
        if(k[i]==k[i+1])
            dem++;
    cout<<dem;
}
