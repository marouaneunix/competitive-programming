#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/71/A
 * Checked : OK
**/

int main()
{
    int n;
    cin >> n;
    while(n--) {
        string a;
        cin >> a;
        if(a.size() > 10) {
            cout << a[0] << a.size() - 2 << a[a.size() - 1] << endl;
        }else {
            cout << a << endl;
        }
    }
    return 0;
}