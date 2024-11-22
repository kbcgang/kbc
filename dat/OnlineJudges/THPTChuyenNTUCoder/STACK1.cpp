/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a, x, n;
vector<int> ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> x;
            ans.push_back(x);
        }
        else if (a == 2)
        {
            if (ans.empty() == 1)
                cout << -1;
            else
            {
                cout << ans[ans.size() - 1];
                ans.pop_back();
            }
            cout<<"\n";
        }
        else
        {
            if (ans.empty() == 1)
                cout << -1;
            else
                cout << ans[ans.size() - 1];
            cout << "\n";
        }
    }
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << " ";
}