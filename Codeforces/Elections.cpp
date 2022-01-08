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
#define swap(a,b) b = a + b - (a = b)

//
void func() {
	//write your funtion code here.
}

//ACCEPTED IN CODEFORCES :)
//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, a, b, c;
	cin >> t;


	while (t--)
	{
		cin >> a >> b >> c;

		//Check for a
		if ((a - max(b, c)) <= 0)
			cout << abs((a - max(b, c))) + 1 << " ";
		else
			cout << 0 << " ";

		//Check for b
		if ((b - max(a, c)) <= 0)
			cout << abs((b - max(a, c))) + 1 << " ";
		else
			cout << 0 << " ";

		//Check for c
		if ((c - max(a, b)) <= 0)
			cout << abs((c - max(a, b))) + 1 << " ";
		else
			cout << 0 << " ";

		cout << "\n";

	}

	return 0;
}
