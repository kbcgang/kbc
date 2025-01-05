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
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;
string s;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    queue<int> q;
    while (n--)
    {
        cin >> s;

        if (s == "E")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (s == "D")
        {
            if (!q.empty())
            {
                cout << q.front() << "\n";
                q.pop();
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (s == "G")
        {
            if (!q.empty())
            {
                cout << q.front() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
    if (!q.empty())
    {
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
        cout << "\n";
    }
    else
    {
        cout << "\n";
    }

    return 0;
}
