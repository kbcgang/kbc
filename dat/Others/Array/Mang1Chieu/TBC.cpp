/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
double a[105], s, ans=INT_MAX,m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    s=1.0*s/n;
    for(int i=0;i<n;i++)
        if(min(ans,abs(a[i]-s))!=ans)
        {
            m=a[i];
            ans=abs(a[i]-s);
        }
    cout<<setprecision(2)<<fixed<<s<<"\n"<<m;
}