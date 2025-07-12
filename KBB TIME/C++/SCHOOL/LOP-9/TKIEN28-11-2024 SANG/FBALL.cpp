///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien q,p,r,s,u,v, A, B , C;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> p >> q >> r >> s >> u >> v;
    if (p > q)
    {
        A += 3;
    }
    if (p < q)
    {
        B += 3;
    }
    if (p == q)
    {
        A++;
        B++;
    }
    if (r > s)
    {
        A += 3;
    }
    if (r < s)
    {
        C += 3;
    }
    if (r == s)
    {
        A++;
        C++;
    }
    if (u > v)
    {
        B += 3;
    }
    if (u < v)
    {
        C += 3;
    }
    if (u == v)
    {
        B++;
        C++;
    }
    cout << A << " " << B << " " << C;
}
