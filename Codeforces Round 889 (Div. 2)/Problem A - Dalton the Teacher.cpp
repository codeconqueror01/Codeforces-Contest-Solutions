#include<bits/stdc++.h>
using namespace std;
int t,n,a; 
int main(){
	cin>>t;
	while(t--){
		int cnt=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a;
			if(a==i)cnt++;
		}
		cout<<(cnt+1)/2<<endl;
	}
	return 0;
}
