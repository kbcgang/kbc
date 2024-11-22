#include <bits/stdc++.h>
#define int long long
using namespace std;
bool snt[100000005];
int dem[100000005];
void make_sieve()
{
    snt[0] = 1;
    snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
    {
        dem[i] = dem[i - 1];
        if (snt[i] == 0)
        {
            dem[i]++;
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
        }
    }
}
int t;
main()
{
    make_sieve();
    cin >> t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<dem[r]-dem[l-1]<<"\n";
    }
}