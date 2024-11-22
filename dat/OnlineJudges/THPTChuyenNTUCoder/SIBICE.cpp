#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,w,h,x;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>w>>h;
    double a=1.0*sqrt(w*w+h*h);
    while(n--)
    {
        cin>>x;
        if(x<=a)
            cout<<"DA\n";
        else cout<<"NE\n";
    }
}