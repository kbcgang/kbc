#include<bits/stdc++.h>
#define ll long long
using namespace std;
int sum;ll odd,even;
int n;ll x;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>x;
        x%=2;
        if(x&1)
        {
            odd++;
            sum=(sum+1)%2;
        }else even++;
    }
    if(sum&1) cout<<odd*even;
    else cout<<odd*(odd-1)/2+even*(even-1)/2;

}