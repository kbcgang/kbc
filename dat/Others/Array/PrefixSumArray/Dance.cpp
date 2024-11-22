/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n;
char s;
long m;
long ans[1000005], a[1000005],dem[10000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if(s=='a')
            ans[i]=1;
        else ans[i]=-1;
    }
    dem[0]=1;
    for(int i=0;i<n;i++)
    {
        a[i]=a[i-1]+ans[i];
        m+=dem[a[i]];
        dem[a[i]]++;
    }
    cout << m;
}