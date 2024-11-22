#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],dem;
bool daocheck(int a[],int n)
{
    for(int i=0;i<n/2;i++)
        if(a[i]!=a[n-i-1])
            return 0;
    return 1;
}
bool perfectnum(int n)
{
    if(n<2) return 0;
    int s=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            s+=i+n/i;
        if(i*i==n)
            s-=i;
    }
    return s==n;
}
 main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(daocheck(a,n)) cout<<"YES\n";
    else cout<<"NO\n";
    for(int i=0;i<n;i++)
        if(perfectnum(a[i]))
            dem++;
    cout<<dem<<"\n";
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
