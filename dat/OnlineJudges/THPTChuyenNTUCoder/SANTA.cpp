#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,x,dem[5];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>x;
        dem[x]++;
    }
    cout<<dem[0]*(dem[0]-1)/2+dem[1]*(dem[1]-1)/2;
}