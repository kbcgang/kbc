#include<bits/stdc++.h>
#define int long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int rand(int l, int r) {
    return uniform_int_distribution<int> (l, r)(rd);
}

main()
{
	  // int ITEST=100;
	  // int n;
	  // for(int itest=1;itest<=ITEST;itest++)
	  // {
	  //   ofstream fcout("test.inp");
	  //   n = rand(1, 100);
	  //   fcout << n;
	  //   fcout.close();
	  //   system("A.exe");
	  //   system("B.exe");
	  //   if(system("fc test.out test.ans")!=0)cout<<-1;
	  // }
	cout << rand(1, 1000);
}

