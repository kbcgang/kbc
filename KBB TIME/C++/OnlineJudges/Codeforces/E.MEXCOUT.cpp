#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005],c[200005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<=n;i++)b[i]=c[i]=0;
		for(int i=1;i<=n;i++)cin>>a[i],b[a[i]]++;
		for(int i=0;i<=n;i++){
			c[b[i]]++;
			c[n-i+1]--;
			if(b[i]==0)break;
		}
		int ans=0;
		for(int i=0;i<=n;i++){
			ans+=c[i];
			cout<<ans<<" ";
		}
		cout<<endl;
	}
	return 0;
}
