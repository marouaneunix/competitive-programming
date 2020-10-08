#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/959/A
 * Checked: OK
**/
int main()
{
	int n;
	cin >> n;
	string winner;
	cout << (n%2 == 0) ? "Mahmoud" : "Ehab";
}