/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
bool snt[1000005];
void check()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e6); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e6; j += i)
                snt[j] = 1;
}
    int t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check();
    cin>>n;
    while (n--)
    {
        cin >> t;
        int m = sqrt(t);
        if (m * m == t && snt[m] == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}