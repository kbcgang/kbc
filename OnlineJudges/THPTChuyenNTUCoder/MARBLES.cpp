#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    cin>>n;
    int i=1;
    while(n>0){
        n-=i;
        i++;
    }
    if(n==0) cout<<"Yes.";
    else cout<<"No.";
}