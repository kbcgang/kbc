#include<bits/stdc++.h>
using namespace std;
vector<int>a;
#define ErasLimit 10000005
bool snt[ErasLimit];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(ErasLimit);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=ErasLimit;j+=i)
                snt[j]=1;
}
int n,x;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    make_sieve();
    while(n--)
    {
        cin>>x;
        if(snt[x]==0)
            a.push_back(x);
    }sort(a.begin(),a.end());
    if(a.empty())cout<<-1;
     if(a.size()&1){
        for(int i=1;i<a.size();i+=2)cout<<a[i]<<" ";
        for(int i=a.size()-1;i>=0;i-=2)cout<<a[i]<<" ";
    }else{
        for(int i=0;i<a.size();i+=2)cout<<a[i]<<" ";
        for(int i=a.size()-1;i>=0;i-=2)cout<<a[i]<<" ";
    }
}