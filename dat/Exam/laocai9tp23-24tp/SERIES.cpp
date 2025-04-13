///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s,s1,s2;
void getS1()
{
    for(int i=0; i<s.size(); i++)
        if(s[i]>'0'&&s[i]<='9')
        {
            for(int j=i; j<s.size(); j++)
                if(s[j]>='0'&&s[j]<='9')
                    s2.push_back(s[j]);
            return;
        }
}
void getS2()
{
    for(int i=0; i<s1.size(); i++)
        if(s1[i]>'0'&&s1[i]<='9')
        {
            for(int j=i; j<s1.size(); j++)
                if(s1[j]>='0'&&s1[j]<='9')
                    s2.push_back(s1[j]);
            return;
        }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>s1;
    getS1();
    getS2();
    cout<<s2<<"\n";
    sort(s2.begin(),s2.end(),greater<char>());
    cout<<s2;
}
