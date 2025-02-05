///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien a,b,c;
kien maxx,minn, vtr,ans,l,r;

void CT()
{
    cin >> a >> b >> c;
    if (c == 0)
    {
        cout << b - a + 1;
        exit(0);
    }
    maxx = b / c;
    minn = (a - 1) / c;
    cout << maxx - minn;
}

void for_trau()
{
    cin >> a >> b >> c;
    if (c == 0)
    {
        cout << b - a + 1;
        exit(0);
    }
    vtr = (a % c == 0) ? a : (a / c + 1) * c;
    dem = 0;
    for (kien i = vtr; i <= b; i += c)
    {
        dem++;
    }
    cout << dem;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for_trau();
}