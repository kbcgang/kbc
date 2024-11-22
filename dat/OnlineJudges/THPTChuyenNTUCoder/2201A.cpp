#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    int i=0;
    while(i<a.size()){
        int s=a[i]+a[i+1]+10;
        a.insert(a.begin()+i+1,s);
        i+=2;
    }
    cout<<a.back();
}