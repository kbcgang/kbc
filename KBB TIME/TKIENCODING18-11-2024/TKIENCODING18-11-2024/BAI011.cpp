///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000];
kien maxx,minn, vtr;

bool bacthang(int n)
{
    if (n < 10)
    {
        return false;
    }
    string str = to_string(n);
    for (int i = 1; i < str.length(); ++i)
    {
        if (str[i] <= str[i - 1])
        {
            return false;
        }
    }
    return true;
}

bool ngto(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int n : a)
    {
        if (bacthang(n) && ngto(n))
        {
            dem++;
        }
    }
    cout << dem << endl;
}
