#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int i=1;
    while(i*5<n){
        ans+=i*5;
        i++;
    }
    cout<<ans;
}