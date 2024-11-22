/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n;
vector<vector<int>> a;
void make_vector(string name, int maths, int it)
{
    int t = maths + it;
    vector<int> m;
    for (int i = 0; i < name.size(); i++)
        m.push_back(int(name[i]));
    m.push_back(t);
    m.push_back(maths);
    m.push_back(it);
    a.push_back(m);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int maths, it;
        cin >> name >> maths >> it;
        make_vector(name, maths, it);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        int j = 0;
        while (a[i][j] > 96)
        {
            cout << char(a[i][j]);
            j++;
        }
        cout << " " << a[i][j+1] << " " << a[i][j+2] << "\n";
    }
}