/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<string> ans;
void check(int i, string s)
{
    if (i == n)
    {
        ans.push_back(s);
        return;
    }
    if((s.find("01",0)!=-1&&s.back()=='1')||s.size()==0||s.find("01",0)==-1)
        check(i + 1, s + '1');
    check(i + 1, s + '0');
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    check(0, "");
    cout << ans.size();
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << "\n"<< ans[i];
}