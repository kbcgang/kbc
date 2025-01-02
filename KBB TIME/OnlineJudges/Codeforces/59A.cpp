#include"iostream"
#include"string"
using namespace std;
string s;
int lc=0,uc=0;
int main(){
  cin>>s;
  for(char d:s){
    if(d>='a'&&d<='z'){lc++;}else{uc++;}
  }
  if(lc<uc){
    for(char d:s){
      cout<<(char)toupper(d);
    }
  }else{
    for(char d:s){
      cout<<(char)tolower(d);
    }
  }
}