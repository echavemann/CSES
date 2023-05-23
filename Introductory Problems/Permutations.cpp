#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n;
    	cin >> n;
    	if ((n == 3) || (n==2)) {
		cout << "NO SOLUTION" << endl;
		return;
	}
	else if (n==1) {
		cout << 1 << endl;
		return;
	}
	else if (n== 4) {
		cout << 3 << " " << 1 << " " << 4 << " " << 2;
		return;
	}
    	int nums[n];
    	int j = 1;
	int k = n;
    	if (n%2 == 1)  cout << (n/2)+1 << " ";
    	for (int i = 0; i < n/2; i++) {
        	nums[2*i] = j;
		j+=1;
        	nums[(2*i) + 1] = k;
		k--;
    	}
	if (n%2 == 0) cout << nums[n-1] << " ";
	for (int i = 0; i < n-1; i++) {
		cout << nums[i] << " "; 
	}
	if (n %2 ==1) cout << nums[n-1];

    

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
