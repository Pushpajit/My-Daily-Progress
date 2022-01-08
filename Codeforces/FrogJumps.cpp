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
int substring(string &s) {
	int MAX = 0, sub = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'L')
			sub++;
		else {
			if (sub > MAX)
				MAX = sub;
			sub = 0;
		}
	}

	if (sub > MAX)
		return sub + 1;

	return MAX + 1;
}//O(n)


//AC codeforces (:hint:)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {

		string s;
		cin >> s;
		cout << substring(s) << "\n";
	}




	return 0;
}
