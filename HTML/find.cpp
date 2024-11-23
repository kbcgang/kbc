///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
string s,s1,x,x1;
kien sum, sum1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin , x);
    getline (cin , x1);
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] >= '0' and x[i] <= '9')
        {
            s += x[i];
        }
    }
    for (int i = 0; i < x1.size(); i++)
    {
        if (x1[i] >= '0' and x1[i] <= '9')
        {
            s1 += x1[i];
        }
    }
    if (s.size() < s1.size()) swap(s, s1);
    int tam = 0;
    string ans = "";
    for (int i = s.size() - 1, j = s1.size() - 1; i >= 0 || tam; i--, j--) {
        int num_a = (i >= 0) ? (s[i] - '0') : 0;
        int num_b = (j >= 0) ? (s1[j] - '0') : 0;
        int sum = num_a + num_b + tam;
        tam = sum / 10;
        ans = char(sum % 10 + '0') + ans;
    }

    cout << ans << endl;
}