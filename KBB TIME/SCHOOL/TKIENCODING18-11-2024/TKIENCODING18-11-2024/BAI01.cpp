///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, a, b, c;

kien chia(kien x) 
{
    return n / x;
}

kien dem() 
{
    kien ab = a * b / __gcd(a, b);
    kien ac = a * c / __gcd(a, c);
    kien bc = b * c / __gcd(b, c);
    kien abc = ab * c / __gcd(ab, c);
    return chia(ab) + chia(ac) + chia(bc) - 2 * chia(abc);
}

int main() 
{
    cin >> n >> a >> b >> c;
    cout << dem() << endl;

    return 0;
}
