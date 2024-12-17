#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n, ans , a , b, vtr;

bool ktnt(kien n) 
{
    if (n <= 1) 
        return false;
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false;
    for (kien i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    }
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if(fopen("BAI2.INP","r"))
    {
       freopen("BAI2.INP","r",stdin);
       freopen("BAI2.OUT","w",stdout);
    }
    for (int i = 1; i <= n; i++) 
    {
        cin >> a >> b;
        if (a != 0 and b != 0) 
        {
            vtr = -b / a;
            if (vtr > 0 and -b % a == 0 and ktnt(vtr)) 
            {
                ans++;
            }
        }
    }
    cout << ans;
}
