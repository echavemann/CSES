#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define db double
#define MOD 1000000007
#define int128 __int128
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair
#define vt vector
#define ins insert
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define setprf(x) setprecision(x) << fixed
#define setpr(x) setprecision(x)
#define lb lower_bound
#define ub upper_bound
#define pll pair<ll, ll>;

using namespace std;

template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef long double ld;
typedef unsigned long long ull;
typedef complex<ld> cd;


void solve()
{
    //Be insane or die trying.
    //
    //
    int n; cin >> n;
    vector<int> dp (n+1,0);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <=6 && i-j >= 0; ++j) {
            (dp[i]+=dp[i-j])%= MOD;
            
        }
    }
    cout << dp[n] << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	t = 1;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
