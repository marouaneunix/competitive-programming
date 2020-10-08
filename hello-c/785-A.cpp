#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/785/A
 * Checked : OK
**/

int main()
{
    int n;
    cin >> n;
    std::map<string, int> map;
    map["Tetrahedron"] = 4;
    map["Cube"] = 6;
    map["Octahedron"] = 8;
    map["Dodecahedron"] = 12;
    map["Icosahedron"] = 20;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        total = total + map[k];
       
    }
    
    cout << total;
}