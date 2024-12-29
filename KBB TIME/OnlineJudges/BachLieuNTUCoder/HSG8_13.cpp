///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
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
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c or a + c <= b or b + c <= a or a <= 0 or b <= 0 or c <= 0)
    {
        cout << "NO";
        return 0;
    }
    string pp = "";
    if (a == b and b == c)
    {
        pp = "TAM GIAC DEU";
    }
    else if (a == b or b == c or a == c)
    {
        double maxx = max({a, b, c});
        double khac1 = (a == maxx) ? b : a;
        double khac2 = (c == maxx) ? b : c;
        if (fabs(maxx * maxx - (khac1 * khac1 + khac2 * khac2)) < 1e-9)
        {
            pp = "TAM GIAC VUONG CAN";
        }
        else
        {
            pp = "TAM GIAC CAN";
        }
    }
    else
    {
        double maxx = max({a, b, c});
        double khac1 = (a == maxx) ? b : a;
        double khac2 = (c == maxx) ? b : c;
        if (fabs(maxx * maxx - (khac1 * khac1 + khac2 * khac2)) < 1e-9)
        {
            pp = "TAM GIAC VUONG";
        }
        else if (maxx * maxx < (khac1 * khac1 + khac2 * khac2))
        {
            pp = "TAM GIAC NHON";
        }
        else
        {
            pp = "TAM GIAC TU";
        }
    }

    if (pp == "TAM GIAC DEU" or pp == "TAM GIAC VUONG" or pp == "TAM GIAC VUONG CAN")
    {
        double p = (a + b + c) / 2.0; 
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << pp << " " << fixed << setprecision(2) << area;
    }
    else
    {
        cout << pp;
    }

    return 0;
}
