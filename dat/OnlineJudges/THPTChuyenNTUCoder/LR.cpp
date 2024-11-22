#include<bits/stdc++.h>
#define int long long 
using namespace std;
int l,r,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>l>>r;
    for(int i=l;i<=r;i++)
        if(i%3==0){
            ans++;
            i+=2;
        }
    cout<<ans;
}