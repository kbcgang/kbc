/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long m;
int ans;
long a[1000005];
map<long, int> dem;
void longest()
{
    int l = 0, r = 0;
    // if (m % 2 == 0)
    while (r < n)
    {
        dem[a[r]]++;
        ans = max(ans, r - l);
        if (a[r] * 2 == m || a[r] == 0)
        {

            // ans = max(ans, r - l);
            while (dem[a[r]] > 1 && l < r)
            {
                dem[a[l]]--;
                l++;
            }
        }
        else if (a[r] * 2 != m)
        {

            while (dem[m - a[r]] > 0 && l < r)
            {
                dem[a[l]]--;
                l++;
            }
        }
        // cout << l << " " << r << "\n";
        r++;
    }
    // else
    //     while (r < n)
    //     {
    //         dem[a[r]]++;
    //         if (dem[m - a[r]] > 0)
    //         {
    //             ans = max(ans, r - l + 1);
    //             while (dem[m - a[r]] > 0 && l < r)
    //             {
    //                 dem[a[l]]--;
    //                 l++;
    //             }
    //         }
    //         r++;
    //     }
    cout << ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] % m;
    }
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<" ";
    longest();
}