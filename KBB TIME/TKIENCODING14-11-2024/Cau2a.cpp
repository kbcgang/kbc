#include <bits/stdc++.h>
using namespace std;
long long m,n,d;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau2a.INP", "r"))
    {
        freopen("Cau2a.INP", "r", stdin);
        freopen("Cau2a.OUT", "w", stdout);
    }
    cin>>m>>n;
    d=m%n;
    if(d==0)
        cout<< 0;
    else
        cout<< n-d;
    return 0;
}