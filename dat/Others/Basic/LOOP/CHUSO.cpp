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
    int s=0,dem=0;
    while(n>0){
        s+=n%10;
        dem++;
        n/=10;
    }

    cout<<dem<<" "<<s;
}
