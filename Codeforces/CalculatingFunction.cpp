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


ll sum_of_odd(ll n) {return n * n;}
ll sum_of_even(ll n) {return n * (n + 1);}

//AC
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	if (n & 1)
		cout << sum_of_even(n / 2) - sum_of_odd((n / 2) + 1);
	else
		cout << sum_of_even(n / 2) - sum_of_odd(n / 2);


	return 0;
}
