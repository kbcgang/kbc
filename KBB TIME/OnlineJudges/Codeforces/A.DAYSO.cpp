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

JAV()
{
    kien n, delta;
    cin >> n >> delta;
    vector<kien> a(n);
    for (kien i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    deque<kien> maxDeque, minDeque;
    kien left = 0, maxLength = 0;
    for (kien right = 0; right < n; ++right)
    {
        while (!maxDeque.empty() and a[maxDeque.back()] <= a[right])
            maxDeque.pop_back();
        while (!minDeque.empty() and a[minDeque.back()] >= a[right])
            minDeque.pop_back();
        maxDeque.push_back(right);
        minDeque.push_back(right);
        while (a[maxDeque.front()] - a[minDeque.front()] > delta)
        {
            ++left;
            if (!maxDeque.empty() and maxDeque.front() < left)
                maxDeque.pop_front();
            if (!minDeque.empty() and minDeque.front() < left)
                minDeque.pop_front();
        }

        maxLength = max(maxLength, right - left + 1);
    }
    cout << maxLength << endl;

    return 0;
}
