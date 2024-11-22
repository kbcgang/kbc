#include<bits/stdc++.h>
#define int long long
using namespace std;
int t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<"0\n";
        else if(a>b){
            if(a%2==0&&b%2==0) cout<<"1\n";
            else if(a%2==1&&b%2==1) cout<<"1\n";
            else if(a%2==1&&b%2==0) cout<<"2\n";
            else if(a%2==0&&b%2==1) cout<<"2\n";
        }
        else if(a<b){
            if(a%2==0&&b%2==0) cout<<"2\n";
            else if(a%2==1&&b%2==1) cout<<"2\n";
            else if(a%2==0&&b%2==1) cout<<"1\n";
            else if(a%2==1&&b%2==0) cout<<"1\n";
        }
    }

}
