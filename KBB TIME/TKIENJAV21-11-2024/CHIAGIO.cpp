///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

void sex(int S, int vvv[], int &hentai)
{
    hentai = 0;
    for(int i = 1; i <= S; ++i)
    {
        if(S % i == 0)
        {
            vvv[hentai++] = i;
        }
    }
}

bool cum(int a[], int n, int porn, int groups[][100], int &jav)
{
    int overflow = 0;
    int dat = 0;
    jav = 0;
    for(int i = 0; i < n; ++i)
    {
        overflow += a[i];
        groups[jav][dat++] = a[i];
        if(overflow == porn)
        {
            jav++;
            overflow = 0;
            dat = 0;
        }
        else if(overflow > porn)
        {
            return false;
        }
    }
    return overflow == 0;
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int lovejav = 0;
    for(int i = 0; i < n; ++i)
    {
        lovejav += a[i];
    }
    int vvv[100], hentai;
    sex(lovejav, vvv, hentai);
    int maxx = 0;
    int dick = 0;
    int pussy[100][100], xxx = 0;
    for(int i = 0; i < hentai; ++i)
    {
        int porn = vvv[i];
        int cock[100][100], jav = 0;
        if(cum(a, n, porn, cock, jav) && jav > maxx)
        {
            maxx = jav;
            dick = porn;
            xxx = jav;
            for(int j = 0; j < jav; ++j)
            {
                for(int k = 0; k < 100; ++k)
                {
                    pussy[j][k] = cock[j][k];
                }
            }
        }
    }
    cout << maxx << " " << dick << endl;
    for(int i = 0; i < maxx; ++i)
    {
        int j = 0;
        while(pussy[i][j] != 0)
        {
            cout << pussy[i][j];
            if(pussy[i][j + 1] != 0)
            {
                cout << " ";
            }
            j++;
        }
        cout << endl;
    }
}
