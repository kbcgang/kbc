#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
ll a, b, c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a+b+c==180&&a>0&&b>0&&c>0)
        {
            ll n=max({a,b,c});
            if(n==90)cout<<"VUONG\n";
            else if(n<90)cout<<"NHON\n";
            else cout<<"TU\n";
        }
        else
            cout << 0 << "\n";
    }
}