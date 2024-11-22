#include<bits/stdc++.h>

using namespace std;
int a,b,c,d;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c>>d;
    if(b>a) swap(a,b);
    if(c>a) swap(a,c);
    if(d>a) swap(a,d);
    cout<<a;
}