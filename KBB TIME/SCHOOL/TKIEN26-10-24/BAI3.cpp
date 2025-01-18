#include <bits/stdc++.h>
using namespace std;
string P, S;

bool xau(const string& n, const unordered_set<char>& vtr)
{
    for (char so : n) {
        if (vtr.count(so)) {
            return true;
        }
    }
    return false;
}

string taoso(string n, const unordered_set<char>& vtr)
{
    for (int i = 0; i < n.size(); ++i)
    {
        if (vtr.count(n[i]))
        {
            for (char c = n[i] - 1; c >= '1'; --c)
            {
                if (!vtr.count(c))
                {
                    n[i] = c;
                    for (int j = i + 1; j < n.size(); ++j)
                    {
                        for (char i = '9'; i >= '1'; --i)
                        {
                            if (!vtr.count(i))
                            {
                                n[j] = i;
                                break;
                            }
                        }
                    }
                    while (n.size() > 1 && n[0] == '0')
                    {
                        n.erase(n.begin());
                    }
                    return n;
                }
            }
            n[i] = '9';
        }
    }
    return "-1";
}

int main()
{
    if(fopen("BAI3.INP","r"))
    {
       freopen("BAI3.INP","r",stdin);
       freopen("BAI3.OUT","w",stdout);
    }
    cin >> P >> S;
    unordered_set<char> vtr(S.begin(), S.end());
    if (!xau(P, vtr))
    {
        cout << P << "\n";
    }
    else
    {
        string ans = taoso(P, vtr);
        cout << ans << "\n";
    }
    return 0;
}
