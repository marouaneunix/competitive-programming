#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/703/A
 * Checked : OK
**/

int main()
{
    int n;
    cin >> n;
    int mPoint = 0;
    int cPoint = 0;
    while(n--) {
        int a,b;
        cin >> a >> b;
        if(a > b) {
            mPoint++;
        }else if(a < b) {
            cPoint++;
        }
    }
    (mPoint > cPoint) ? cout << "Mishka" : (mPoint < cPoint) ? cout << "Chris" :  cout << "Friendship is magic!^^";
    return 0;
}