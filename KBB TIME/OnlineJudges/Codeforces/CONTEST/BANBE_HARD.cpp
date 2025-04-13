// /// Hãy làm Sư tử, đừng làm Nai.😅😅😅
// /// Hãy làm thợ săn, đừng làm con mồi.
// /// --- trungkien1252010@gmai.com ---
// /// ☆*: .｡. o(≧▽≦)o .｡.:*☆
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007

// int sumDivisors(int n)
// {
//     int sum = 1; 
//     int sqrt_n = sqrt(n);
//     for (int i = 2; i <= sqrt_n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//             if (i != n / i)
//             { 
//                 sum += n / i;
//             }
//         }
//     }
//     return sum;
// }

// JAV()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int K;
//     cin >> K;
//     int sum[K + 1] = {0};
//     for (int i = 1; i <= K; i++)
//     {
//         sum[i] = sumDivisors(i);
//     }
//     int dem = 0;
//     for (int M = 1; M <= K; M++)
//     {
//         for (int N = M + 1; N <= K; N++)
//         {
//             if (sum[M] == N && sum[N] == M)
//             {
//                 dem++;
//             }
//         }
//     }
//     cout << dem << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
long long n,a,b;
long long demb,dems,demc,nb,ns,nc;
long long pb,ps,pc,r,f[1000001];
string s;

void sum()
{
    for (int i = 2; i <= 1000000; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i <= 1000000; i++)
    {
        for (int j = i+i; j <= 1000000; j += i)
        {
            f[j] += i;
        }
    }
}
int main()
{
    sum();
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        if (f[f[i]] == i and f[i] <= b and f[f[i]] != f[i])
        {
            demb++;
        }
    }
    cout << demb/2;
    return 0;
}
    