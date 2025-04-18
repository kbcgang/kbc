///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
#define kien long long
#define JAV main
using namespace std;
bool snt[10000005];
int uoc[1000005];
int l, r, k;

void sangNT()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
}

void sanguoc()
{
    for (int i = 1; i <= 1e6; i++)
        for (int j = i; j <= 1e6; j += i)
            uoc[j]++;
}
int d = 0;

void sub1()
{
    sangNT();
    for (; l <= r; l++)
        if (snt[l] == 0)
            d++;
    cout << d;
}

void sub2()
{
    sanguoc();
    for (; l <= r; l++)
        if (uoc[l] == k)
            d++;
    cout << d;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r >> k;
    if (k == 2)
        sub1();
    else
        sub2();
}