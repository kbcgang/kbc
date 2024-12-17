///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,k,m,dem,f[1000000], a[1000000], b[1000000];
kien maxx,minn ,ans,l,r;
char vtr, vtrk;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    kien j = 1;
    for (int i = 1; i <= n; i++)
    {
        while (a[j] <= b[i] and j < n)
        {
            j++;
        }
        if (a[j] > b[i])
        {
            dem++;
            a[j] = 0;
            b[i] = 0;
        }
    }
    cout << dem;
}
