#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
//[.....Modified by Nexus007.....]
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <conio.h>
#include <string.h>

using namespace __gnu_pbds;
using namespace std;

mt19937  rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>,
        rb_tree_tag, tree_order_statistics_node_update> oset;


#define fo(a,b) for(int i = a; i < b; ++i)
#define ll long long
const int mod = 1e9 + 7;



ll valorant(ll high1, ll high2, ll health) {
	ll kill = 0;

	while (health > 0) {
		(kill & 1 ^ 1) ? health -= high1 : health -= high2;
		kill++;
	}
	return kill;
}


//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		ll n, h;
		ll high1 = -1, high2 = -1;
		cin >> n >> h;
		for (int i = 0; i < n; ++i)
		{
			ll dam;
			cin >> dam;

			high1 = max(high1, dam);
			if (dam > high2 && dam < high1)
				high2 = dam;
		}

		cout << valorant(high1, high2, h) << "\n";
	}

	return 0;
}
