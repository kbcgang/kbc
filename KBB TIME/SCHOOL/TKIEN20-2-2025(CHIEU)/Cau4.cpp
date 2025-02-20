/*
Cho xâu ký tự s gọi t là xâu gheép  của k xâu S, Chúng ta có thể thực hiện các thao tác để thay đổi một ký tự bất kỳ
sao cho 2 ký tự liên tiếp không giống nhau. Hãy tìm số lượng ký tự cần thay đổi ít nhất để tạo ra xâu t.
Với độ dài xâu S <= 100 và k <= 10 mũ 9

*/
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
kien maxx, t,minn, vtr,ans,l,r;
string s, x;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    cin >> t;
    x = s;
    for (int i = 2; i <= t; i++)
    {
        s += x;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            s[i + 1] = '*';
            dem++;
        }
    }
    cout << dem;
}
