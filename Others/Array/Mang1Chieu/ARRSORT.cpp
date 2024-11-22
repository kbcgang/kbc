///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
double a[1005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<setprecision(2)<<fixed<<a[i]<<" ";
    cout<<'\n';
    for(int i=n-1;i>=0;i--)
        cout<<setprecision(2)<<fixed<<a[i]<<" ";
}