///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien l,r;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("MFRA.inp","r"))
    {
        freopen("MFRA.inp","r",stdin);
        freopen("MFRA.out","w",stdout);
    }
    cin >> l >> r;
    cout << l/__gcd(l,r) << " " << r/__gcd(l,r);
}