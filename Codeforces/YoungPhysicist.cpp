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



//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	int x1, y1, z1;
	x1 = y1 = z1 = 0;
	cin >> t;
	while (t--) {

		int x, y, z;
		cin >> x >> y >> z;
		x1 += x;
		y1 += y;
		z1 += z;
	}

	if (x1 == 0 && y1 == 0 && z1 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";


	return 0;
}
