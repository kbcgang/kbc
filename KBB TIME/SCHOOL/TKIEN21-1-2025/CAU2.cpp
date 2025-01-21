/*
Đếm số từ trong xâu gốc và số lần xuất hiện của từ đó trong xâu gốc
INPUT: Nhập 2 xâu kí tự S và T (1 ≤ |S|, |T| ≤ 10^6)
OUTPUT: In ra số lần xuất hiện của từ T trong xâu S và số từ trong xâu S. Số từ trước, số lần xuất hiện sau.
Giới hạn: Mỗi xâu không quá 1000 từ
*/
/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S, T;
    getline(cin, S);
    getline(cin, T);
    istringstream iss(S);
    vector<string> words((istream_iterator<string>(iss)), istream_iterator<string>());
    int dem = words.size();
    int times = 0;
    size_t pos = S.find(T);
    while (pos != string::npos)
    {
        times++;
        pos = S.find(T, pos + 1);
    }
    cout << dem << " " << times << endl;
}