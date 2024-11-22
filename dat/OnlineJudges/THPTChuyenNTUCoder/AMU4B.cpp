#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    a=a%10;
    if(a==2||a==7||a==8)
    {
        b=b%4;
        int m=pow(a,b);
        cout<<m%10;
    }
    else if(a==4||a==9){
        b=b%2;
        int m=pow(a,b);
        cout<<m%10;
    }
    else if(a==3){
        b=b%5;
        int m=pow(a,b);
        cout<<m%10;
    }
    else cout<<a;
}