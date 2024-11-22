#include<bits/stdc++.h>
#define int long long
using namespace std;
string check(int n)
{
    if(n<2) return "KHONG";
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return "KHONG";
    return "CO";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<check(2*n+1);

}
