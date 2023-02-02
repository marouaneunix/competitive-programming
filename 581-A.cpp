#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/581/A
 * Checked: OK
**/
int main()
{
    int a, b;
	cin >> a >> b;
	cout << std::min(a, b) << " " << (int) (std::max(a, b) - std::min(a, b)) /2;
}