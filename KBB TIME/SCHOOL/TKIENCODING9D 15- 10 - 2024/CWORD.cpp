///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien l,r,dem;
string s,x,p;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CWORD.inp","r"))
    {
        freopen("CWORD.inp","r",stdin);
        freopen("CWORD.out","w",stdout);
    }
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            x += s[i];
        }
        else
        {
            for (int j = x.size()-1; j >= 0; j--)
            {
                if (x[j] != '0')
                p += x[j];
            }
            cout << p << "\n";
            if (p == x)
            {
                dem++;
            }
            x = "";
            p = "";
        }
    }
    cout << dem;
}

