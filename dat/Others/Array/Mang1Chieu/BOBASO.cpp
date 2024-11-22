///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[105],ans,s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int o=j+1;o<n;o++)
            {
                if(a[i]+a[j]>a[o]&&a[i]+a[o]>a[j]&&a[j]+a[o]>a[i]){
                    s=max(s,a[i]+a[o]+a[j]);
                    ans++;
                }
            }
    cout<<ans<<" "<<s;
}