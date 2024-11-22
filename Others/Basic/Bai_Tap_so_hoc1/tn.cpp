///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
       cin>>a[i];
    int m=a[0]*a[1]/__gcd(a[0],a[1]);
    for(int i=0;i<n;i++)
        m=m*a[i]/__gcd(m,a[i]);
    cout<<m<<"\n";
    for(int i=0;i<n;i++)
        cout<<m/a[i]<<" ";
}