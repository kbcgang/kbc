///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,pos1,pos2;
double x,a[105];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]<0){
            cout<<setprecision(2)<<fixed<<a[i]<<" ";
            break;
        }
    for(int i=n;i>=1;i--)
        if(a[i]>0){
            cout<<setprecision(2)<<fixed<<a[i]<<"\n";
            break;
        }
    for(int i=1;i<=n;i++)
        if(a[i]==x){
            cout<<i<<" ";
            break;
        }
    for(int i=n;i>=1;i--)
        if(a[i]==x){
            cout<<i;
            break;
        }
}