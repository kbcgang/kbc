/*
Ở một quốc gia có n loại tiền gồm các mệnh giá a1,a2,a3...,an (n<=10). Có những cách nào để lấy các tờ tiền sao cho tổng mệnh giá của
chúng là ? Biết rằng mỗi mệnh giá tiền có thể được lấy nhiều lần và hai cách lấy là hoán vị của nhau chỉ tính là một.
Ví dụ: với 3 loại tiền mệnh giá 10,20,50, có 10 cách lấy tiền để có
tổng là 100, bao gồm 10 tờ 10, hoặc 2 tờ 50, hoặc 3 tờ 10, 1 tờ 20 và 1 tờ 50, ..
*/
/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int n, a[10], m;
int ans;
int curMoney, typeMoney;
void Count(int pos)
{
    for (int i = typeMoney; i < n; i++)
    {
        typeMoney=i;    // lấy vị trí tờ tiền đang dùng, khi đệ quy(nếu không có) sẽ bị lặp lại tờ trước
        curMoney += a[i];
        if (curMoney >= m)
        {
            if (curMoney == m)
            {
                ans++;
            }
        }
        else
            Count(pos + 1); //đệ quy
        curMoney -= a[i];//quay lui
    }
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Count(0);
    cout << ans;
}