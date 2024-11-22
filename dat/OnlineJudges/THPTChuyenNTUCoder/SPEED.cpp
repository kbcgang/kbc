#include<bits/stdc++.h>
#define int long long 
using namespace std;
int s,t,t1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>t>>t1;
    printf("%.4f",(sqrt(s*t)-sqrt(s*(t-t1)))/t1);
} 