#include <iostream>
#include <vector>
#include <string>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/705/A
 * Checked: OK
**/

int main()
{
    int n;
    cin >> n;
    string msg = "";
    for (int i = 1; i < n; i++)
    {
        msg = i%2 == 0 ? msg +"I love that " : msg +"I hate that ";
    }
    msg = n%2 == 0 ? msg +"I love it" : msg +"I hate it";

    cout <<msg;
}