#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
char a;
string s;
bool check(char a,string s)
{
    for(int i=0;i<s.size();i++)
        if(s[i]==a)
            return 0;
    return 1;
}
main()
{
    cin>>n>>a;
    while(n--){
        cin>>s;
        if(check(a,s))
            cout<<s<<"\n";
    }
}
