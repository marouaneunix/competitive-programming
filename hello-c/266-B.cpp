#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/266/B
 * Checked : KO
**/

int main()
{
    int n, t;
    cin >> n >> t;
    unordered_map <int, char> result;
   
        cout << "ok" << endl;
        while(n--) {
            char a;
            cin >> a;
            if(a == 'G' && result[n+1] == 'B') {
                result[n+1] = a;
                result[n] = 'B';
            } else {
                result[n] = a;
            }
        }
    
    for (const auto& p : result ) {
        std::cout << p.second;
    }
    return 0;
}