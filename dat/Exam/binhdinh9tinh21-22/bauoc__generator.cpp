#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

main()
{
    cout<<rd()%1000000000000;
}