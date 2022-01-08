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


#define ll long long
#define fo(a,b) for(int i = a; i < b; i++)
const int mod = 1e9 + 7;

int SQRT(int num) {
	int lo = 1, hi = num;
	int mid;

	while (hi - lo > 1) {
		mid = (hi + lo) / 2;

		if (mid * mid == num)
			return mid;

		if (mid * mid > num)
			hi = mid;
		else
			lo = mid;
	}
	return lo;
}//O(logn)


bool isPrime(int n) {
	for (int i = 2; i < SQRT(n); ++i)
		if (n % i == 0)
			return false;

	return true;
}

//It will give TLE error, optimize your code
int allDivisor(int n) {
	int square = SQRT(n);
	int l, b;
	if (isPrime(n))
		return (1 + n) * 2;
	else if (square * square == n)
		return square * 4;
	else {
		for (int i = 2; i < n; ++i)
		{
			for (int j = i; j < n; j++)
			{
				if (i * j == n)
					l = i; b = j;
			}
		}
	}
	return (l + b) * 2;
}//O(n^2)



//Driver code.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	cout << allDivisor(n);

}
