#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[10000];
long long S,k;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (int i = k; i <= n; i++)
    {
        a[i] = a[i+1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}
