///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----       BAI2
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
unordered_map <int, int > pp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pp[a[i]]++;
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
    {  
        if (pp[a[i]] == 1)
        {
            cout << a[i];
            exit(0);
        }
    }
    cout << -1;
}