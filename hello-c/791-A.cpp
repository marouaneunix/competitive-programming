#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/791/A
 * Checked: OK
**/

int main()
{
    int n, k;
    cin >> n >> k;
    int year = 0;
    while (n<=k)
    {
        year++;
        n=n*3;
        k=k*2;
    }
    
    
    cout <<year;
}