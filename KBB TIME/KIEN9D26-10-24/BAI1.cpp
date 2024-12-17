///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,k,m,dem,f[1000000], a[1000000],t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("BAI1.INP","r"))
    {
       freopen("BAI1.INP","r",stdin);
       freopen("BAI1.OUT","w",stdout);
    }
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >>  n;
        cout << n/3 + n/5 - n/15 << "\n";
    }
}
