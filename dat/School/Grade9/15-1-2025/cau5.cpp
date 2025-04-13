/// Made by Nguyễn Hữu Đạt
/*
trong năm tới, công tuy ABZ sẽ sử dụng số vốn là k để đầu tư vào n dự án
dự án thứ i(1<=i<=n) cấn số vốn đầu tư là ai. tuy nhiên có một số dự án
không cần vốn đầu tư và con cung ứng ngược lại cho công ty số vốn là ai(thể hiện bằng giá trị ai<0)
danh sách các dự án này được sắp xếp theo thời gian thực hiện, không thể thay đổi thứ tự. để đảm bảo hiệu quả đầu tư, công ty cần loại một số dự án ở đầu hoặc cuôi danh sách, sao cho các dự án được đầu tư là một dãy liên tục và tổng số vốn đầu tư không vượt quá k. hãy xác định số dự án ít nhất mà công ty cần phải loaijh ra khỏi danh sách
dữ liệu vào:
dòng đầu tiên ghi 2 số nguyên dương n và k(1<=n<=1e5, 1<=k<=1e9)
dòng thứ hai ghi n số nguyên ai(1<=i<=n, abs(ai)<=1e6)
kết quả: một số nguyên cho biết số dự án bị loại ra khỏi danh sách
input: 6 4 2 3 -1 1 1 1
output 2
giải thích cần loại dự án 1 và 6*/
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[100005], ans=1e9;
ll k, s;
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
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = 1;
    while (r <= n)
    {
        s += a[r];
        if (s > k)
        {
            ans=min(ans,n-r+l);
            while (s > k)
            {
                s -= a[l];
                l++;
            }
        }
        r++;
    }
    ans=min(ans,n-r+l);
    cout << ans;
}