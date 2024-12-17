///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long

bool nto(kien n)
{
    if(n < 2) 
        return false;
    for(kien i = 2; i * i <= n; i++)
    {
        if(n % i == 0) 
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S;
    cin >> S;
    kien n = S.size();
    kien dem = 0;
    for(kien i = 0; i < n; i++)
    {
        if(S[i] >= '0' && S[i] <= '9')
        {
            dem++;
        }
    }
    kien maxx = -1;
    string x = "";
    for(kien i = 0; i < n; i++)
    {
        if(S[i] >= '0' && S[i] <= '9')
        {
            if(x.empty() && S[i] == '0')
            {
                continue;
            }
            else
            {
                x += S[i];
            }
        }
        else
        {
            if(!x.empty())
            {
                kien n = stoll(x);
                if(nto(n))
                {
                    maxx = max(maxx, n);
                }
                x = "";
            }
        }
    }
    if(!x.empty())
    {
        kien n = stoll(x);
        if(nto(n))
        {
            maxx = max(maxx, n);
        }
    }
    cout << dem << '\n';
    cout << maxx << '\n';
}