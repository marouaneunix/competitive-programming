#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/617/A
 * Checked: OK
**/
int main()
{
    int a ;
	cin >> a;
	int steps = 0;
	int max_steps = 5;
	while (a !=0)
	{	
		int x = a/max_steps;	
		if(x > 0) {
			a=a-max_steps;
			steps++;
		} else {
			max_steps--;
		}
	}
	std::cout << steps;
}