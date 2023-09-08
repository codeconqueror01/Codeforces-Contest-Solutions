#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		double sum = a+b;
		sum/=2;
		sum = sum-min(a,b);
		if((int)(sum/c)*c == sum)
		{
			
			cout<<(int)sum/c<<endl;
		}
		else cout<<(int)(sum/c) + 1<<endl;
	}
 } 
