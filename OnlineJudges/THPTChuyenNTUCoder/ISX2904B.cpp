#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
pair<int, int> a[100005];
int dem[105];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        dem[a[i].first]++;
    }
    for (int i = 0; i < n; i++)
        cin >> a[i].second;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (dem[a[i].first] > 1)
        {
            int start = dem[a[i].first] + i -1;
            while (start >= i)
            {
                cout << a[start].first << " " << a[start].second << "\n";
                start--;
            }
            i=dem[a[i].first]+i-1;
        }
        else
            cout << a[i].first << " " << a[i].second << "\n";
    }
}