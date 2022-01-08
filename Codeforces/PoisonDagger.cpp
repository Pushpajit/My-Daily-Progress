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


//
bool predicateFUN(vector<int> &a, ll h, ll k) {
	ll poison = 0;

	for (int i = 1; i < a.size(); ++i)
	{
		int effects = a[i] - a[i - 1];
		if (effects <= k)
			poison += effects;
		else
			poison += k;

		if (poison >= h)
			return true;
	}

	return ((poison + k) >= h);

}

ll findK(vector<int> &attack, ll h) {
	ll l = 1, r = 1e18;
	ll k;

	while (r - l > 1) {
		k = l + (r - l) / 2;

		if (predicateFUN(attack, h, k))
			r = k;
		else
			l = k;
	}

	if (predicateFUN(attack, h, l))
		return l;
	else
		return r;

}//O(nlogn)


//AC codeforces :) *1200
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		int n;
		ll h;
		cin >> n >> h;
		vector<int> v(n);

		fo(0, n) cin >> v[i];
		cout << findK(v, h) << "\n";
	}




	return 0;
}
