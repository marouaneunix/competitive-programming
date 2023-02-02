#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/1186/A
 * Checked: OK
**/
int main()
{
    int n, m, k;
	cin >> n >> m >> k;
	(n <= m && n <= k) ? cout << "Yes" : cout << "No";
}