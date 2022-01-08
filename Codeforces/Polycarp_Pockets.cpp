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
#define mod 1e9+7
const int N = 100;
int HASH[N + 1];

//
int searchMax() {
	int m = -1;

	for (int i = 1; i < N + 1; ++i)
		if (HASH[i] > m) m = HASH[i];

	return m;
}
//CODEFORCES ACCEPTED :)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int coin;
		cin >> coin;
		HASH[coin]++;
	}

	cout << searchMax();
	return 0;
}
