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
kien n;
priority_queue<int, vector<int>, greater<int>> pq;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    while (pq.size() > 1)
    {
        int ai = pq.top();
        pq.pop();
        int aj = pq.top();
        pq.pop();
        if (ai == aj)
        {
            continue;
        }
        else
        {
            pq.push(aj - ai);
        }
    }
    cout << pq.top() << endl;
}