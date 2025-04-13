#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
int ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans++;
            if (i * i != n)
                ans++;
        }
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans--;
            while (n % i == 0)
                n /= i;
        }
    }if(n>1)ans--;
    cout<<ans;
}