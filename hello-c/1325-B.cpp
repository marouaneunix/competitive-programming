#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_set>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/1325/B
 * Checked : OK
**/

int main()
{
    int n;
    cin >> n;
    
    while(n--) {
       int l;
       cin >> l;
       unordered_set<int> c;
       while (l--)
       {
           int a;
           cin >> a;
           c.insert(a);
       }
       cout << c.size() << endl;
    }
}