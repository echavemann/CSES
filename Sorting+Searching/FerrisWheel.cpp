#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 10;

int n, x, p[maxn], i, j, ans;
bool have_gondola_yet[maxn];

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; ++i) cin >> p[i];
	sort(p, p + n);
	i = 0;
	j = n - 1;
	while (i < j) {
		if (p[i] + p[j] > x) {
			--j;
		} else {    // If it satisfies the condition.
			++ans;  // Increment the number of gondolas used
			have_gondola_yet[i] = have_gondola_yet[j] = true;
			++i;
			--j;  // Move to the next children.
		}
	}
	for (int i = 0; i < n; ++i) {
		ans += have_gondola_yet[i] == false;
	}
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
