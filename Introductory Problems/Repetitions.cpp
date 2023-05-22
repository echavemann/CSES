#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	string seq; cin >> seq;
	int mx = 0;
	int curr = 0;
	char prev = 'Z';
	for (char x: seq) {
		if (x == prev) curr++;
		else {
			mx = max(curr, mx);
			curr = 1;
			prev = x;
		}
	}
	mx = max(curr, mx);
	cout << mx << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
        solve();
    	return 0;
}
