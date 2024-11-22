#include<bits/stdc++.h>
#define int long long
using namespace std;
int a, b;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    if(a % 2 == 0)
    {
        cout << a / 2 + b / 2;
    }
    else
    {
        int t = 0;
        if(a < 0)
        {
            a++;
            t--;
        }
        else{
            a--;
            t++;
        }
        if(b < 0)
        {
            b++;
            t--;
        }
        else{
            b--;
            t++;
        }
        cout<<a/2+b/2+t/2;
    }
}
