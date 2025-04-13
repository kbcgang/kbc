#include<bits/stdc++.h>
using namespace std;
int t,n,ketqua;
int main()
{
    bool found= false;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
    for(int j=1;j<=sqrt(n);j++)
    {
        if(j*j==n)
        {
            ketqua++;
            cout<<ketqua<<endl;
            cout<<"YES";
            found=true;
        }
    }
    if(!found)
        {
            cout<<"NO"<<" ";

        }
    }
}
