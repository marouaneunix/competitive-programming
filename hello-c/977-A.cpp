#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/777/A
 * Checked: OK
**/
int main()
{
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if(n%10 == 0) {
            n = n/10;
        }else {
            n--;
        }
    }
    
    cout <<n;
}