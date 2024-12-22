///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;

#define kien long long

bool doixung(kien x) 
{
    string s = to_string(x);
    string dao = s;
    reverse(dao.begin(), dao.end());
    return s == dao;
}

int main() {
    kien a, b;
    cin >> a >> b;
    kien ans = 0;
    for (kien i = a; i <= b; ++i) 
    {
        if (i > 9 && doixung(i)) 
        {
            ans++;
        }
    }
    cout << ans << endl;
}
