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
kien n,a[NT + 2],f[NT + 2],b[NT + 2],dem;

void ktra()
{

    for (int i = 1; i <= NT; i++)
    {
        f[i] = true;
    }
    f[0] = false;
    f[1] = false;
    for (int i = 2; i*i <= NT; i++)
    {
        if (f[i] == true)
        {
            for (int j = i*i; j<=NT; j+= i)
            {
                f[j] = false;
            }
        }
    }
}

JAV()
{
    ktra();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (f[a[i]] == true)
        {
            b[dem] = a[i];
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << -1;
        exit(0);
    }
    sort(b, b + dem);
//    for (int i = 0; i < dem; i++) cout << b[i] << " ";
//    cout << endl;
    if (dem % 2 == 1)
    {
        for (int i = 1; i < dem; i += 2)
        {
            cout << b[i] << " " ;
        }
        for (int i = dem-1; i >= 0; i -= 2)
        {
            cout << b[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < dem; i += 2)
        {
            cout << b[i] << " ";
        }
        for (int i = dem-1; i >= 1; i -= 2)
        {
            cout << b[i] << " " ;
        }

    }

}
