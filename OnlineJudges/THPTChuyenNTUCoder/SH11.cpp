#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if (n >= 5)
        while (n >=2)
        {ans+=n/5;
            n /= 5;
            
        }
    cout << ans;
}