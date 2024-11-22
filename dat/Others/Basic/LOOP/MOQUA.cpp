#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,t[100005],a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    int i=0,j=n-1;
    while(i<j){
        if(t[i]>t[j]){
            b++;
            t[i]-=t[j];
            t[j]=0;
            j--;
        }
        else if(t[i]<t[j]){
            a++;
            t[j]-=t[i];
            t[i]=0;
            i++;
        }
        else{
            a++;
            b++;
            i++;
            j--;
        }
    }
    if(t[i-1]==0) a++;
    else if(t[j+1]==0) b++;
    cout<<a<<" "<<b;
}
