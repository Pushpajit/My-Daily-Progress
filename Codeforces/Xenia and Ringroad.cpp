#include<bits/stdc++.h>
using namespace std;

//Accepted :)
/*
Xenia lives in a city that has n houses built along the main ringroad.
The ringroad houses are numbered 1 through n in the clockwise order.
The ringroad traffic is one way and also is clockwise.
Xenia has recently moved into the ringroad house number 1. 
As a result, she's got m things to do. In order to complete the i-th task, 
she needs to be in the house number ai and complete all tasks with numbers less than i. 
Initially, Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a neighboring one along the ringroad takes one unit of time.

INPUT
The first line contains two integers n and m (2 ≤ n ≤ 10^5, 1 ≤ m ≤ 10^5). The second line contains m integers a1, a2, ..., am (1 ≤ ai ≤ n). Note that Xenia can have multiple consecutive tasks in one house.
Output
Print a single integer — the time Xenia needs to complete all tasks.
*/

int main()
{	
    long long int n, m, X = 1, count = 0;
	cin >> n >> m;
	vector<long long> v1;
	long long num;

	for (int i = 0; i < m; i++)
	{
		cin >> num;
		v1.push_back(num);
	}
	
	int i = 0;

	while (i < v1.size())
	{
		if(X <= v1[i]){
            count += v1[i] - X;
            X = v1[i];
            i++;
        }
        else{
            count += (n - X) + 1;
            X = 1;
        }
	}

	cout<<count;
	
	
}