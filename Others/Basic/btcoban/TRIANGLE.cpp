#include<bits/stdc++.h>
#define int long long 
using namespace std;
int b,a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>b>>a;
    a=a*2;
   if(b%a!=0) cout<<b/a+1;
   else cout<<b/a;
}