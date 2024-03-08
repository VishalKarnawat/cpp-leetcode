/*
	CRED Coins

	For each bill you pay using CRED, you earn
	X CRED coins.
	At CodeChef store, each bag is worth
	100
	100 CRED coins.

	Chef pays
	Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

	Input Format
	First line will contain
	T, number of test cases. Then the test cases follow.
	Each test case contains of a single line of input, two integers
	X and
	Y.
	Output Format
	For each test case, output in a single line - the maximum number of bags Chef can get from the CodeChef store.

	link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int T, X, Y, total, coins = 100, coinGet;
	cin >> T;

	while (T--)
	{
		cin >> X >> Y;
		total = X * Y;
		coinGet = total / coins;
		cout << ceil(coinGet) << endl;
	}
	return 0;
}
