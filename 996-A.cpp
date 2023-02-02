#include <iostream>
#include <vector>
#include <string>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/996/A
 * Checked : OK
**/

int main()
{
    int n;
    int bills[5] = {100, 20, 10, 5, 1};
    cin >> n;
    int response = 0;
    for (int i = 0; i < 5; i++)
    {
        while (n>=bills[i])
        {
           response = response + n/bills[i];
           n = n%bills[i];
        }
        
    }
    
    
    
    cout << response;
}