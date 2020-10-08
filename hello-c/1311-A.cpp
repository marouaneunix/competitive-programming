#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Problem : https://codeforces.com/problemset/problem/1311/A
 * Checked: NO
**/
int main()
{
    int n;
    cin >> n;
    int response[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int comp = 0;
        while (a != b)
        {
            if(a < b) {
                int x = b - a;
                if(x%2 != 0) {
                    a = a+x;
                } else {
                    a = a+(x-1);
                }
                comp++;
            } else {
                int x = a - b;
                if(x%2 != 0) {
                    a = a-(x+1);
                }else {
                    a = a - x;
                }
                comp++;
            }
        }
        response[i] = comp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << response[i] << endl;
    }   
}
