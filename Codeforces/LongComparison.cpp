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


//to calculate the power of 10
ll binaryExpo(ll b, int a = 10) {
	ll ans = 1;

	while (b) {
		if (b & 1)
			ans *=  a;
		a *= a;
		b >>= 1;
	}
	return ans;
}

//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		ll x1, x2, p1, p2;
		cin >> x1 >> p1;
		cin >> x2 >> p2;

		if (x1 * 1ll * binaryExpo(p1) < x2 * 1ll * binaryExpo(p2))
			cout << "<\n";
		else if (x1 * 1ll * binaryExpo(p1) > x2 * 1ll * binaryExpo(p2))
			cout << ">\n";
		else
			cout << "=\n";
	}



	return 0;
}
