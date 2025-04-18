#include"stdio.h"
long long n;
int main(){
  scanf("%lld",&n);
  if(n&1){
    printf("%lld",((n+1)/2)*-1);
  }else{
    printf("%lld",n/2);
  }
}