/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

int main()
{
    string str;
    cin >> str;

    int l = 0, r = str.length() - 1;
    bool doixung = true;

    while (l < r)
    {
        if (str[l] != str[r])
        {
            doixung = false;
            break;
        }
        l++;
        r--;
    }

    if (doixung)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
