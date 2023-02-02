#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/935/A
 * Checked: NO
**/
int main()
{
	int n;
	cin >> n;
	int number = 0;
	int i = 1;
	while (i <= n/2)
	{
		int val = (n-i)%i;
		if (val == 0) {
			number++;
		}
		i++;
	}
	cout << number;
}