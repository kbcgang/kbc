#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=sqrt(n);i>=1;i--)
    {
        if(n%i==0){
            cout<<i<<" "<<n/i;
            return 0;
        }
    }

}
