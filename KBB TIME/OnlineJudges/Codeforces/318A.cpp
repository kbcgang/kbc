#include"iostream"
long long n,k;
int main(){
  // scanf("%lld%lld",&n,&k);
  std::cin>>n>>k;
  if(k<=n/2){
    // printf("%lld",1+2*(k-1));
    std::cout<<1+2*(k-1);
  }else{
    // printf("%lld",2+2*(k-((n+1)/2)-1));
    std::cout<<2+2*(k-((n+1)/2)-1);
  }
}