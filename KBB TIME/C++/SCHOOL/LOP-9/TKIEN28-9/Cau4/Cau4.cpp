//Sự khác biệt giữa những người thành công và những người thất bại
//không phải là ở kỹ năng, kiến thức hay sự hiểu biết, mà nó nằm ở Ý CHÍ.
#include <bits/stdc++.h>
using namespace std;
long long n,k,m,dem,f[1000000], a[1000000],ans, l;
string s, x , c, p;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau4.inp", "r")) {
        freopen("Cau4.inp", "r", stdin);
        freopen("Cau4.out", "w", stdout);
    }
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' and s[i-1] == ' ')
        {
            continue;
        }
        else
        {
            x += s[i];
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i-1] == ' ' and x[i] >= 'a' and x[i] <= 'z')
        {
            x[i] -= 32;
        }
        if (x[i] != ' ')
        {
            c += x[i];
            dem++;
        }
        else if (x[i] == ' ')
        {
            if (ans < dem)
            {
                p = c;
                c = "";
                ans = dem;
            }
            dem = 0;
            l++;
        }
    }
    cout << x << "\n";
    cout << p << "\n";
    cout << l + 1;
}





