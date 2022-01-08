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
void func() {
	//write your funtion code here.
}

//AC codeforces :)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string group = "22";
	int COUNT = 0;
	for (int i = 0; i < n; ++i)
	{
		string mag;
		cin >> mag;

		if (group[group.size() - 1] == mag[0])
			COUNT++;

		group.push_back(mag[0]);
		group.push_back(mag[1]);
	}
	cout << COUNT + 1;

	return 0;
}
