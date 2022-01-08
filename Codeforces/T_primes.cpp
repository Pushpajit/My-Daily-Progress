#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
//[.....Modified by Nexus007.....]
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <string.h>

using namespace __gnu_pbds;
using namespace std;

mt19937  rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>,
        rb_tree_tag, tree_order_statistics_node_update> oset;


#define fo(a,b) for(int i = a; i < b; ++i)
#define ll long long
const int mod = 1e9 + 7;
const int N = 1e6 + 10;
vector<bool> isPrime(N, true);


//AC in codeforces :) *1300
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//Pre-computing prime numbers upto 1e6.
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= N; ++i)
	{
		if (isPrime[i])
			for (int j = i * 2; j <= N; j += i)
				isPrime[j] = false;
	}

	int n;
	cin >> n;
	while (n--) {
		ll x;
		cin >> x;

		int root = sqrt(x);
		if (root * 1LL * root == x) {
			if (isPrime[root]) //squares of a prime number is T-prime,
				cout << "YES\n"; //So I check sqrt of a number x if it is prime or not.
			else
				cout << "NO\n";
		}
		else
			cout << "NO\n";
	}


	return 0;
}
