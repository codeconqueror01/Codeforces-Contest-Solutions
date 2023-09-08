#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;++i)
    {
        for(int d=2;d*d<=i;++d)
        {
            if(i%d==0&&i/d>=2)
            {
                cout<<d<<" "<<i-d<<'\n';
                return;
            }
        }
    }
    cout<<"-1\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}

