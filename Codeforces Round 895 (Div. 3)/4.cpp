#include<bits/stdc++.h>
using namespace std;
void solve(){
   long long n,x,y;
   cin>>n>>x>>y;
   long long ans=0;
   long long lcm= __gcd(x,y);
    lcm=(x*y)/lcm;
    long long common= n/lcm;
 
    x=(n/x)-common;
    y=(n/y)-common;
    ans+= (x*(2*n+1-x)/2);
    ans-=(y*(y+1))/2;
    cout<<ans<<endl;
 
}
int main(){
long long t;
cin>>t;
while(t--){
    solve();
}
return 0;
}
