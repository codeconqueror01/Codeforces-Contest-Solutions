#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int n;
bitset<200001> dp, check, new_dp;
 
void solve(){
    cin >> n;
    vector<int> v(n), pref(n + 1);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }
    for(int i = 0; i <= n * 2; i++){
        check[i] = 1;
    }
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        if(pref[i + 1] < i){
            break;
        }
        new_dp = dp & check;
        new_dp <<= v[i];
        dp |= new_dp;
        check[i] = 0;
    }
    int ans = 0;
    for(int i = 0; i <= n * 2; i++){
        if(dp[i]){
            ans = max(ans, pref[min(i + 1, n)] - i);
        }
    }
    cout << ans;
}
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
}
