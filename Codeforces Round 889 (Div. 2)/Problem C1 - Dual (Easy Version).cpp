#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n;
	cin >> n;
	int ans = 0;
	queue<pair<int, int>>q;
	int a[n + 5];
	int mx = 0, idx = 0, cnt = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (abs(a[i]) > mx) {
			cnt = a[i];
			idx = i;
		}
		mx = max(abs(a[i]), mx);
	}
	if (mx == 0) {
		cout << 0 << endl;
		return;
	}
	if (cnt > 0) {
		for (int i = 1; i <= n; i++) {
			if (a[i] < 0) {
				ans++;
				q.push(make_pair(i, idx));
 
			}
		}
		for (int i = 2; i <= n; i++) {
			ans++;
			q.push(make_pair(i, i - 1));
		}
	} else {
		for (int i = 1; i <= n; i++) {
			if (a[i] > 0) {
				ans++;
				q.push(make_pair(i, idx));
			}
		}
		for (int i = n; i >= 2; i--) {
			ans++;
			q.push(make_pair(i - 1, i));
		}
	}
	cout << ans << endl;
	while (q.size()) {
		auto[x, y] = q.front();
		cout << x << " " << y << endl;
		q.pop();
	}
}
 
signed main() {
	int test;
	cin >> test;
	while (test--) {
		solve();
	}
}
