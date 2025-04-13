#include<bits/stdc++.h>
using namespace std;
int a[10000007],n,ketqua;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {

        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        bool found=false;// de tim  nhi co yeu to nhieu ko:((
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                cout<<a[j]<<" ";
                found=true;//nhi yeu nhieu hon:(((
                break;
            }
        }
        if(!found)//neu nhi ko yeu nhieu hon:(((
        {
            cout<<-1;
        }
    }

}



