#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b,c;
main()
{
    cin>>a>>b>>c;
    if(a+b>c&b+c>a&&a+c>b)
        if(a==b||a==c||b==c)
            {cout<<"YES";
            return 0;}

     cout<<"NO";
}