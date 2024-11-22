#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, ans = 0;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            ans++;
            while(n % i == 0)
            {
                n /= i;
            }
        }
    }
    if(n>1) ans++;
    cout << ans;
}
