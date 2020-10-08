#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/1030/A
 * Checked: OK
**/
int main()
{
    int n;
    bool isHard =  false;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 1) {
            isHard = true;
        }
    }
    
    string msg = isHard ? "HARD" : "EASY";
    cout << msg;
    
}