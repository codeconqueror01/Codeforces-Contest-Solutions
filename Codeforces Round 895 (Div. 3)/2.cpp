#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int result=1E9;
    for(int i=0;i<n;i++){
        int d,s;
        cin>>d>>s;
        result=min(result,d+(s-1)/2);
    }
    cout<<result<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
