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

kien sumEven(kien N)
{
    kien k = N / 2;
    return k * (k + 1);
}

kien sumOdd(kien N)
{
    return (N * (N + 1)) / 2 - sumEven(N);
}

JAV()
{
    kien A, B;
    cin >> A >> B;
    kien tongchan = sumEven(B) - sumEven(A - 1);
    kien tongle = sumOdd(B) - sumOdd(A - 1);

    cout << tongchan - tongle;
}
