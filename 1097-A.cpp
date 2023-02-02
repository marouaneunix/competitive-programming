#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/1097/A
 * Checked: OK
**/
int main()
{
	string cardTable ;

    cin >> cardTable;
	bool play = false;
	
	for (int i = 0; i < 5; ++i) {
		string k;
		cin >> k;
		if(cardTable[0] == k[0] || cardTable[1] == k[1]) {
			play = true;
		}
	}
	
	string msg = play ? "YES" : "NO";
	cout << msg;
}
