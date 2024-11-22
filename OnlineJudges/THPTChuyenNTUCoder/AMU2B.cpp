#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b;
main()
{
    cin>>a>>b;
    
    a=a%10;
    if(a==2||a==7||a==8||a==3)
    {
        int m=b%4;
        int n=pow(a,m);
        cout<<n%10;
    }
    else if(a==4||a==9){
        int m=b%2;
        int n=pow(a,m);
        cout<<n%10;
    }

    else{
        cout<<a;
    }
}