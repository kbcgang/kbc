///Ä‘Å¸â€”Â¿ Ä‘Å¸Â¤Â«Ä‘Å¸Â§ÂĂ¢â‚¬Â
#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
using namespace std;
int n,t,pos;
string s,s1;
char ch;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>ch;
    s1=s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==ch)
        {
            t++;
            pos=i;
            s.erase(i--,1);
        }
    }
    if(pos>s.size()/2||(s.size())%2==1)
    {
        cout<<-1;
        return 0;
    }
    for(int i=0;i<(s1.size()-t)/2+1;i++)
    {
        cout<<s1[i];
    }
}