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
    int s=0;
    for(int i=1;i<=n;i+=2)
        s+=i;
    cout<<s;

}
