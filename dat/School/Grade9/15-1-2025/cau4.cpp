/// Made by Nguyễn Hữu Đạt
/*
cho dãy A gồm n phần tử a1,a2,...an và một số nguyên k
yêu câu: viết chương trình đếm số dãy con liên tiếp ai,ai+1,...,ạ(1<=i<=j<=n)sao cho tổng dãy con không lớn hơn k
dữ liệu vào: 
dòng đầu tiên: chứa 2 số nguyên dương n và k
dòng thứ hai: chứa n số nguyên a1,a2,...,an
input: 6 10 1 2 7 10 15 5
output: 8
giới hạn: 1<=ai<=1e6, k<=1e9, n<=1e6*/
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll k, a[1000005], ans;
ll s;
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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    a[n]=1e12;
    int l = 0, r = 0;
    while (r <= n)
    {
        s += a[r];
        while (s > k)
        {
            // cout<<l<<" "<<r<<" "<<s<<"\n";
            ans += r - l;
            s -= a[l];
            l++;
        }
        r++;
    }
    // ans += r - l;
    cout << ans;
}