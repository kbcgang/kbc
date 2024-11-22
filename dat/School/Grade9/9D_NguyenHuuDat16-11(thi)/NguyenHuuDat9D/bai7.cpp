#include<bits/stdc++.h>
using namespace std;
int n,k;
string a;
int dem[100];
main()
{
    if(fopen("bai7.inp","r"))
    {
        freopen("bai7.inp","r",stdin);
        freopen("bai7.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    while(n--)
    {
        cin>>a;
        for(int i=0;i<a.size();i++)
            dem[a[i]]++;
    }
    cout<<dem[k+48];
}
