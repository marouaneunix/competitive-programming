#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <unordered_set>

using namespace std;

/**
 * Problem : https://arena.ioi.ma/problem/gc4azuzanagram
 * Checked : OK
**/

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_set <int> elements;
    vector<int> g1; 
    while (n--) {
        int a;
        cin >> a;
        elements.insert(a);
    } 
    while (m--)
    {
        int b;
        cin >> b;
        if (elements.find(b) != elements.end()) {
            g1.push_back(b);
        }
    }
        sort(g1.begin(), g1.end());
    
    if(g1.empty()){
        cout << "Empty";
    } else {
        for (int i = 0; i < g1.size(); i++) {
            cout << g1[i] << " ";
        }
    }
    
    return 0;
}

