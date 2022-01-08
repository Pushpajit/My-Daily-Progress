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


//sum of N narutal number.
ll sum_of_N(int N) {
	return ((N * 1ll) * (N + 1)) / 2;
}

int noOfMsg(int k, ll x) {
	int l = 1, r = 2 * k - 1;
	int m = k; //at 1st m is always equal to k

	while (r - l > 1) {
		ll sum = 0;

		if (m <= k)
			sum = sum_of_N(m);
		else
			sum = sum_of_N(k) + (sum_of_N(k - 1) - sum_of_N(2 * k - m - 1)); //My own formula :)

		if (sum == x)
			return m;
		else if (sum > x)
			r = m;
		else
			l = m;

		m = l + (r - l) / 2;
	}

	//check for l > k
	if (l > k) {
		if (sum_of_N(k) + sum_of_N(k - 1) - sum_of_N(2 * k - l - 1) == x)
			return l;
		else
			return r;
	}//check for l <= k
	else {
		if (sum_of_N(l) == x)
			return l;
		else
			return r;
	}
}//O(logn)

//AC on codeforces *1300 difficulty problem ;)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int k;
		ll x;
		cin >> k >> x;
		cout << noOfMsg(k, x) << "\n";
	}


	return 0;
}
