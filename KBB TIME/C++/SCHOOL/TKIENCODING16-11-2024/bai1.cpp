///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define MOD 1000000007
#define Million 1000000
#define NT 10000000
kien n,k,minn = INT_MAX;
string x,s;

int main()
{
    cin >> k;
    cin.ignore();
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            x += s[i];
        }
    }
    n = x.size() - 1;
    kien vtr = 0,dem = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = vtr + 1; j <= n - k + dem; j++)
        {
            if (x[j] == '0' and dem == 0)
            {
                continue;
            }
            if (minn > x[j])
            {
                minn = x[j];
                vtr = j;
            }
        }
        cout << char(minn);
        minn = INT_MAX;
        dem++;
    }
}