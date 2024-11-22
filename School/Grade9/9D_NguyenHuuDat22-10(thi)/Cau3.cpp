/// Kiên is unreliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, k;
string s;
bool pos[500005];
void fullsub()
{
    int del = n - k;
    int d = 0, c = 1;
    s = s + ' ';
    while (c < s.size() - 1 && del > 0)
    {
        if (s[c] > s[c + 1])
            while (d <= c && del > 0)
            {
                if (s[d] < s[c] && pos[d] == 0)
                {
                    del--;
                    pos[d] = 1;
                }
                // for(int i=0;i<s.size()-1;i++)
                //     cout<<pos[i]<<" ";
                d++;
                cout<<"\n";
            }
        c++;
    }
    if(del>0)
        for(int i=s.size()-2;i>=0;i--)
        {
            if(del==0)
                break;
            pos[i]=1;
            del--;
        }
    for (int i = 0; i < s.size() - 1; i++)
        if (pos[i] == 0)
            cout << s[i];
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string 2man="13";
    cin >> n >> k >> s;
    fullsub();
}