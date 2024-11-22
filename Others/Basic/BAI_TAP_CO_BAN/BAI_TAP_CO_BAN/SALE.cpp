#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k,p;
main()
{
    cin>>n>>k>>p;
    int sohoc=n/(k+1);
    int sole=n%(k+1);
    int sotien=sohoc*k*p+sole*p;
    cout<<sotien;
}
