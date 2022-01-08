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


//CODEFORCES ACCEPTED :) but you can optimize this code by the help of binary search.

//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k, eat = 0, i = 1;
	cin >> n >> k;
	ll sum = 0, prev = 0;

	while (i <= n) {
		if (sum > k) {
			sum--;
			eat++;

		} else {
			prev++;
			sum += prev;
		}
		//cout << sum << " ";
		i++;
	}//O(n)

	cout << endl << eat;


}
