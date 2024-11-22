#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int n)
{
    int s=1;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0){
        s+=i+n/i;
    }
    return s>=n;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<check(n);

}
