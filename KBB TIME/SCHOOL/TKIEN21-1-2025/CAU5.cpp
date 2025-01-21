/*
Ashish có một mảng aa kích thước nn. Một dãy con của aa được định nghĩa là một dãy có thể thư được từ aa bằng
cách xóa một số phần tử (có thể không) mà không thay đổi thứ tự cảu các phần tử còn lại.
Xết mọt dãy con của ss của aa. Ashish định nghĩa chi phí của ss là giá trị nhỏ nhất giữa:
1. Giá trị lớn nhất trong tất cả các phần tử ở chỉ số lẻ của s.
2. Giá trị lớn nhất trong tất cả các phần tử ở chỉ số chẵn của s.
Lưu ý rằng chỉ số của một phần tử là chỉ số của nó trong s, không phải chỉ số của nó trong a. Các vị trí được
đánh số từ 1. Vù vậy, chi phí của ss bằng min(max(s1,s3,...),max(s2,s4,...)).
Ví dụ chi phí của {7,5,6} là min(max(7,6),max(5)) = min(7,5) = 5.
Hãy giúp Ashish tìm chi phí nhỏ nhất của một dãy con có độ dài k.
INPUT: Dòng đầu tiên chứa 2 số nguyên n,k (1 ≤ k ≤ n ≤ 10^6). Dòng thứ 2 chứa n số nguyên a1,a2,...,an (1 ≤ ai ≤ 10^9).
OUTPUT: In ra chi phí nhỏ nhất của một dãy con có độ dài k.
*/
/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien maxx, a[Million];
kien n, k;

bool ktr(int n, int k, int x)
{
    int dem = 0;
    bool pickOdd = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= x)
        {
            dem++;
            pickOdd = !pickOdd;
        }
        else if (!pickOdd)
        {
            dem++;
            pickOdd = true;
        }
        if (dem >= k)
            return true;
    }
    return false;
}

int tknp()
{
    int l = 1, r = maxx, kq = r;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ktr(n, k, mid))
        {
            kq = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << kq;
}

JAV()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    tknp();
    return 0;
}
