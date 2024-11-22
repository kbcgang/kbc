///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[100005];
int b[100005];
int ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    b[0]=1;
    for(int i=1;i<n;i++){
        b[i]=b[i-1];
        if(a[i]!=a[i-1])
            b[i]++;
        ans+=b[i];
    }
    cout<<ans+1;
}