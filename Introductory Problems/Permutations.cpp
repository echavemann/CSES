#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n;
    cin >> n;
    if (n < 5) cout << "NO SOLUTION" << endl;
    int nums[n];
    int j = 0;
    if (n%2 == 1)  cout << n << endl;
    for (int i = 0; i < n/2; i++) {
        nums[2*i] = i+1; 
        nums[(2*i) + 1] = n-(i-1);
    }
    for (int z : nums) cout << z << " ";
    

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
