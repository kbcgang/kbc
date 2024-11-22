#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,dem[100],cou;
string s;
main()
{
    if(fopen("bai8.inp","r"))
    {
        freopen("bai8.inp","r",stdin);
        freopen("bai8.out","w",stdout);
    }
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size();i++){
        dem[s[i]]++;
    }
    cout<<cou;
}
