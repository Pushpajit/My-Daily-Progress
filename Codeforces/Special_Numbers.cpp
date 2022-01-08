#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
//Created By-Ashutosh Kumar Pathak (Modified by N3XU5)
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <conio.h>
#include <string.h>

using namespace __gnu_pbds;
using namespace std;

mt19937  rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>,
        rb_tree_tag, tree_order_statistics_node_update> oset;


#define ll long long
const int MOD = 1e9 + 7;


//
ll specialNumber(ll n, ll k) {
	ll mask = 1, power = 1;
	ll result = 0;

	for (int i = 0; i < log2(k) + 1; ++i)
	{
		if (k & mask) {
			result = (result + power) % MOD;
		}

		power = (power * n) % MOD;
		mask <<= 1;
	}
	return result;

}

//CODEFORCES ACCEPTED :)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		ll n, k;
		cin >> n >> k;
		cout << specialNumber(n, k) << "\n";

	}

	return 0;
}
