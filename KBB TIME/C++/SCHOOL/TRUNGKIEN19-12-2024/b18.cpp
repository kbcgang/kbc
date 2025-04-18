// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string x;
    getline(cin, x);
    string s = "";
    for (char d : x)
    {
        if (d >= 'A' && d <= 'Z')
        {
            d = d + 32;
            s = s + d;
        }
        else
            s += d;
    }
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        word[0] = word[0] - 32;
        cout << word << " ";
    }
}