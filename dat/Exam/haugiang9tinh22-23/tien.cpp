/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
vector<int> valMoney = {1, 2, 5, 10, 20, 50, 100};
int n;
int dem[200005][105];
//QHĐ đồng xu nhưng lưu số tiền
void getMoney(int x, int i, bool &save)
{
    if (x - valMoney[i] < 0)
        return;
    // if (i == 0)
    // {
    //     dem[x][valMoney[i]] = dem[x - valMoney[i]][valMoney[i]] + 1;
    //     save = 0;
    //     return;
    // }
    for (int j = 0; j < i; j++)
        if (dem[x - valMoney[i]][valMoney[i]] + 1 > dem[x - valMoney[i]][valMoney[j]])
            return;
    // dem[x][valMoney[i]] = dem[x - valMoney[i]][valMoney[i]] + 1;
    save = 0;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    //O(14*7*n)
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool save = 1;
        for (int j = valMoney.size() - 1; j >= 0; j--)
        {
            getMoney(i, j, save);
            if (save == 0)
            {
                for (int k = 0; k < valMoney.size(); k++)
                {
                    dem[i][valMoney[k]] = dem[i - valMoney[j]][valMoney[k]];
                    if (k == j)
                        dem[i][valMoney[k]] = dem[i - valMoney[j]][valMoney[k]] + 1;
                }
                break;
            }
        }
        // cout<<i<<" "<<dem[i][1]<<"\n";
    }
    for (int i = 0; i < valMoney.size(); i++)
        cout << valMoney[i] << " " << dem[n][valMoney[i]] << "\n";
}