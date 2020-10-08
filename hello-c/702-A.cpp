#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_set>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/702/A
 * Checked : OK
 * ### TEST 1 ###
 * ***** INPUT *****
 * 5
 * 1 7 2 11 15
 * ***** OUTPUT *****
 * 3
 * * ### TEST 1 ###
 * ***** INPUT *****
 * 6
 * 100 100 100 100 100 100
 * ***** OUTPUT *****
 * 1
 * * ### TEST 1 ###
 * ***** INPUT *****
 * 3
 * 1 2 3
 * ***** OUTPUT *****
 * 3
 *
**/

int main()
{
    int n;
    cin >> n;
    int max = 1;
    int max_length = 1;
    int previous_val = 0;
    while(n--) {
       int current_val;
       cin >> current_val;
       if(previous_val != 0 && current_val >= previous_val) {
           max++;
       } else {
           max = 1;
       }
       max_length = max_length > max ? max_length : max;
       previous_val = current_val;
    }
    cout << max_length;
}