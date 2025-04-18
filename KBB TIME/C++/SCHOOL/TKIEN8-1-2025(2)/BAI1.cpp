///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double a, b, c;
    cin >> a >> b >> c;
    double h = sqrt(c * c - pow((b - a) / 2, 2));

    double S_hinhthang = (a + b) * h / 2;

    double r = h / 4;
    double S_gieng = 3.14 * r * r;

    double S_conlai = S_hinhthang - S_gieng;
    cout << fixed << setprecision(2) << S_conlai << endl;

    return 0;
}
