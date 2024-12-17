///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
unordered_map <int , int> pp;

int tknp(int x)
{
    int l = 1, r = ans;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (dp[mid] > x)
        {
            kq = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i == 1)
        {
            ans++;
            dp[ans] = a[i]; 
        }
        else 
        {
            if (tknp(a[i]) == -1)
            {
                ans++;
                dp[ans] = a[i];
            }
            else
            {
                dp[tknp(a[i])] = a[i];
            }
        }
    }
    cout << ans;
}