///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien x, y;
kien sinh(kien x, kien y) {
    if (x % 3 != 0) 
    {
        x = x + (3 - x % 3);
    }
    if (y % 3 != 0) 
    {
        y = y - (y % 3);
    }
    if (x > y) 
    {
        return 0;
    }
    kien n = (y - x) / 3 + 1;
    kien tong = n * (x + y) / 2;
    return tong;
}

int main() 
{
    if(fopen("SD3.inp","r"))
    {
        freopen("SD3.inp","r",stdin);
        freopen("SD3.out","w",stdout);
    }
    cin >> x >> y;
    cout << sinh(x, y) << endl;
}
