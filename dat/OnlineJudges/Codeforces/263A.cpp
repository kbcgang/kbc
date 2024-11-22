///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a[5][5],posc,posl;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                posc=j;
                posl=i;
            }
        }
    cout<<abs(posc-2)+abs(posl-2);

}
