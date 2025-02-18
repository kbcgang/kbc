#include <bits/stdc++.h>
#define kien long long
#define JAV main
#define mod 1000000007
using namespace std;
string s;

kien money, ans;
kien breadinstorage, cheeseinstorage, sausageinstorage;
kien breadprice, cheeseprice, sausageprice;
kien breadreq, cheesereq, sausagereq;
void monica()
{
    kien l = 0, r = 1000000000000000;
    while (l <= r)
    {
        // kien breadbill = 0, cheesebill = 0, sausagebill = 0;
        kien m = (l + r) / 2; /// m là số bánh có thể làm được
        kien breadbill = max(0LL, (m * breadreq - breadinstorage) * breadprice);
        kien cheesebill = max(0LL, (m * cheesereq - cheeseinstorage) * cheeseprice);
        kien sausagebill = max(0LL, (m * sausagereq - sausageinstorage) * sausageprice);
        if (breadbill + cheesebill + sausagebill > money)
            r = m - 1;
        else
        {
            l = m + 1;
            ans = m;
        }
    }
    cout << ans;
}
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    cin >> breadinstorage >> sausageinstorage >> cheeseinstorage;
    cin >> breadprice >> sausageprice >> cheeseprice >> money;
    for (kien i = 0; i < s.size(); i++)
        if (s[i] == 'B')
            breadreq++;
        else if (s[i] == 'C')
            cheesereq++;
        else
            sausagereq++;
    monica();
}
    