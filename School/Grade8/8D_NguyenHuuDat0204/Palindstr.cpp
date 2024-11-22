#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans=1;
string s;

main()
{
    if(fopen("Palindstr.inp","r")){
        freopen("Palindstr.inp","r",stdin);
        freopen("Palindstr.out","w",stdout);
    }
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=s.size()-1;j>i;j--)
            if(s[i]==s[j]){
                int m=1;
                for(int k=i;k<=j/2;k++)
                    if(s[k]!=s[j+i-k])
                        m=0;
                if(m) ans=max(ans,j-i+1);
            }
    }
    cout<<ans;
}
