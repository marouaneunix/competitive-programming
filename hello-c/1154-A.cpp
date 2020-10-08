#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/1154/A
 * Checked: OK
**/
int main()
{
    vector<int> a(4);
	for (int i = 0; i < 4; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;
}