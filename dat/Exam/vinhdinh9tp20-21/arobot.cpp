#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<int>> t;
int n, a[222230];
int used[222230];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> b = {0};
    t.push_back(b);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (!used[a[i] - 1])
        {
            b = {a[i]};
            t.push_back(b);
            used[a[i]] = t.size() - 1;
        }
        else
        {
            t[used[a[i] - 1]].push_back(a[i]);
            used[a[i]] = used[a[i] - 1];
        }
    }
    sort(t.begin(), t.end());
    for (int i = 1; i < t.size(); i++)
    {
        for (int j = 0; j < t[i].size(); j++)
            cout << t[i][j] << " ";
        cout << "\n";
    }
}