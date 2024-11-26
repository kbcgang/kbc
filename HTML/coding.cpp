#include <bits/stdc++.h>
using namespace std;

double maxx, minn, vtr, edge;
string s;

int main()
{
    while (cin >> s)
    {
        if (s == "0:00")
        {
            break;
        }
        maxx = 0;
        minn = 0;
        vtr = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ':')
            {
                vtr = i;
                break;
            }
            else
            {
                maxx = maxx * 10 + (s[i] - '0');
            }
        }
        for (int i = vtr + 1; i < s.size(); i++)
        {
            minn = minn * 10 + (s[i] - '0');
        }
        double minute = minn * 6;
        double hour = (maxx) * 30 + (minn * 0.5);

        edge = abs(hour - minute);
        if (edge > 180)
        {
            edge = 360 - edge;
        }
        cout << fixed << setprecision(3) << edge << "\n";
    }
}
