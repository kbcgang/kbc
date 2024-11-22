#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[10000006];
int a[10], dem[10], ans;
bool check(int n, int* dem)
{
    int m[10];
    for(int i = 0; i < 10; i++)
        m[i] = dem[i];
    while(n > 0)
    {
        if(m[n % 10] == 0)
            return 0;
        m[n % 10]--;
        n /= 10;
    }
        return 1;
}
bool check1(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int lownum, highnum;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, save = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++)
        lownum = lownum * 10 + a[i];
    for(int i = n - 1; i >= 0; i--)
        highnum = highnum * 10 + a[i];
    for(int i = 0; i < n; i++)
        dem[a[i]]++;
    snt[0] = 1;
    snt[1] = 1;
//    int m = pow(10, n + 1);
//    for(int i = 2; i <= sqrt(m); i++)
//        if(snt[i] == 0)
//        {
//            for(int j = i * i; j <= m; j += i)
//                snt[j] = 1;
//        }
    for(int i = lownum; i <= highnum; i++)
    {
        if(check(i,dem)&&check1(i))
        {
            cout << i << "\n";
            save = 0;
        }
    }
    if(save)
        cout << -1;
}
