///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l;
string s,x,c;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    ans = 1;
    cin.ignore();
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i ; j < s.size() - k + i; j++)
        {
            x += s[j];
        }
        c = x;
        reverse(x.begin(), x.end());
        if (c == x)
        {
            cout << c;
            exit(0);
        }
        x = "";
    }
    cout << "No";
}