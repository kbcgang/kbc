#include<bits/stdc++.h>
#define int long long 
using namespace std;
int l,r,ans;
main()
{
    cin>>l>>r;
    if(l%2==1) l+=1;
    if(r%2==1) r-=1;
    cout<<(l+r)*((r-l)/2+1);
}