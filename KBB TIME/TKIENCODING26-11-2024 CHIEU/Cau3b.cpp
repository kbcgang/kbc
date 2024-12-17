///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[NT],l,r;

void sangNT()
{
    for (int i = 1; i <= NT; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i <= sqrt(NT); i++)
    {
        if (f[i])
        {
            for (int j = i*i; j <= NT; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> l >> r;
    for (int i= l; i <= r; i++)
    {
        if (f[i])
        {
            dem++;
        }
    }
    cout << dem;

}