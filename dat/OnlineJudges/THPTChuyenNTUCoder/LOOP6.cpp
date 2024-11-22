#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("@");
        printf("\n");
    }
}