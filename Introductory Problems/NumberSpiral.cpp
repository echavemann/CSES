#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n; cin >> n;
	while(n--) {
		ll x, y; cin >> x >> y;
		ll n = max(x, y);
		if (x >= y) {
			if ( n % 2 == 0 ) {
				cout << (n*n)-(y-1) << endl;
				continue;
			}
			else {
				ll z = ((n-1)*(n-1))+1;
				cout << z + (y-1) << endl;
				continue;
			}
		}
		else 
		{
			if (n % 2 == 0) {
				ll z = ((n-1) * (n-1)) + 1;
				cout << z + (x-1) << endl;
				continue;
			}
			else {
				cout << (n*n)-(x-1) << endl;
				continue;
			}
		}
			
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    	{
        	solve();
    	}
    	return 0;
}
