#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/263/A
 * Checked : OK
**/

int main()
{
    int bit;
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++) {
            cin >> bit;
            if(bit == 1) {
                cout << (std::abs(i - 3) + abs(j -  3));
            }
        }
    }
    
    return 0;
}