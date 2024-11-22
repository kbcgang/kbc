#include<bits/stdc++.h>
#define int long long 
using namespace std;
int m,kg;
main()
{
    if(fopen("BMI.inp","r")){
        freopen("BMI.inp","r",stdin);
        freopen("BMI.out","w",stdout);
    }
    cin>>m>>kg;
    int bmi=kg/(m*m);
    if(bmi<20) cout<<"GaY";
    else if(bmi<=25&&bmi>=20) cout<<"Bthuong";
    else cout<<"Beo";
}