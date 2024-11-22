#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int dem[200];
int types;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
        dem[s[i]]++;
    sort(dem,dem+200,greater<int>());
    cout<<s.size()-dem[0]-dem[1];
}
