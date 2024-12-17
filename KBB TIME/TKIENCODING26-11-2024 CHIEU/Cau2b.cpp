///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> n;
    dem = a % 10;
    if (dem == 0)
    {
        cout << 0;
        exit(0);
    }
    if (dem == 1)
    {
        cout << 1;
        exit(0);
    }
    if (dem == 2)
    {
        f[0] = 6, f[1] = 2, f[2] = 4, f[3] = 8;
        m = n % 4;
        cout << f[m];
        exit(0);
    }
    if (dem == 3)
    {
        f[0] = 1, f[1] = 3, f[2] = 9, f[3] = 7;
        m = n % 4;
        cout << f[m];
        exit(0);
    }
    if (dem == 4)
    {
        f[0] = 6, f[1] = 4;
        m = n % 2;
        cout << f[m];
        exit(0);
    }
    if (dem == 5)
    {
        cout << 5;
        exit(0);
    }
    if (dem == 6)
    {
        cout << 6;
        exit(0);
    }
    if (dem == 7)
    {
        f[0] = 1, f[1] = 7, f[2] = 9, f[3] = 3;
        m = n % 4;
        cout << f[m];
        exit(0);
    }
    if (dem == 8)
    {
        f[0] = 6, f[1] = 8, f[2] = 4, f[3] = 2;
        m = n % 4;
        cout << f[m];
        exit(0);
    }
    if (dem == 9)
    {
        f[0] = 1, f[1] = 9;
        m = n % 2;
        cout << f[m];
        exit(0);
    }
}