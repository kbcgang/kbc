#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1000005];
void sebig()
{
    for(int i=0; i<n-1; i++)
        if(a[i]!=a[i+1])
        {
            cout<<a[i+1];
            exit(0);
        }
    cout<<a[0];
}
main()
{
    if(fopen("bai5.inp","r"))
    {
        freopen("bai5.inp","r",stdin);
        freopen("bai5.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n,greater<long long>());
    sebig();
}
