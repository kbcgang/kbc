#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,s;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        s+=i*i*i*i;
    printf("%i",s);
}