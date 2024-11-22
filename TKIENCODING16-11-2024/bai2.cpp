#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,k,x,y, maxx, minn, p , v;

int main()
{
    if(fopen("bai2.INP", "r"))
    {
        freopen("bai2.INP", "r", stdin);
        freopen("bai2.OUT", "w", stdout);
    }
    cin >> x >> y >> n;
    if (n % 2 == 1)
    {
        p = x*pow(2,((n/2) + 1));
        if (n / 2 != 0)
        v = y*pow(2,(n/2));
        else
            v = y;
        cout << max(p,v) / min(p,v);
    }
    else
    {
        p = x*pow(2,n/2);
        v = y*pow(2,n/2);
        cout << max(p,v) / min(p,v);
    }
}
