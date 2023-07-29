
#include <bits/stdc++.h>
using namespace std;
int t;
long long n;
 
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		int i = 1;
		while (n % i == 0)
			i++;
		cout << i - 1 << endl;
	}
	return 0;
}
