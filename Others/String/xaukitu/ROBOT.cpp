///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
int x,y;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cin>>s;
    short vt=0;
    for(int i=0;i<s.size();i++)
    {
        if(vt==0)
        {
            if(s[i]=='G')
                y++;
            if(s[i]=='B')
            {
                y--;
                vt=2;
            }
            if(s[i]=='R')
            {
                x++;
                vt=3;
            }
            if(s[i]=='L')
            {
                x--;
                vt=1;
            }
        }
        else if(vt==1)
        {
            if(s[i]=='G')
                x--;
            if(s[i]=='B')
            {
                x++;
                vt=3;
            }
            if(s[i]=='R')
            {
                y++;
                vt=0;
            }
            if(s[i]=='L')
            {
                y--;
                vt=2;
            }
        }
        else if(vt==2)
        {
            if(s[i]=='G')
                y--;
            if(s[i]=='B')
            {
                y++;
                vt=0;
            }
            if(s[i]=='R')
            {
                x--;
                vt=1;
            }
            if(s[i]=='L')
            {
                x++;
                vt=3;
            }
        }
        else if(vt==3)
        {
            if(s[i]=='G')
                x++;
            if(s[i]=='B')
            {
                x--;
                vt=1;
            }
            if(s[i]=='R')
            {
                y--;
                vt=2;
            }
            if(s[i]=='L')
            {
                y++;
                vt=0;
            }
        }
        
    }
    cout<<x<<" "<<y;
}