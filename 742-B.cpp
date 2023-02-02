#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <iostream>

using namespace std;

/**
 * Problem : https://codeforces.com/contest/742/problem/B
 * Checked: KO
**/
// int myXOR(int x, int y) 
// { 
//     int res = 0; // Initialize result 
      
//     // Assuming 32-bit Integer  
//     for (int i = 31; i >= 0; i--)                      
//     { 
//        // Find current bits in x and y 
//        bool b1 = x & (1 << i); 
//        bool b2 = y & (1 << i); 
         
//         // If both are 1 then 0 else xor is same as OR 
//         bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);           
  
//         // Update result 
//         res <<= 1; 
//         res |= xoredBit; 
//     } 
//     return res; 
// }

int main()
{
   // int a = 64;
	string b = "43";
	int list[64] = {78,90,211,205 ,198 ,4 ,172 ,43, 163 ,21, 58 ,145 ,28 ,66 ,210 ,68 ,79 ,90 ,155 ,123 ,9 ,119 ,188 ,151 ,180 ,157 ,44 ,163 ,20 ,71 ,28 ,120 ,163 ,141 ,170 ,206 ,31, 34 ,21 ,195 ,72 ,194 ,83 ,163 ,140 ,40 ,182 ,208 ,127 ,128, 110, 72 ,184 ,157 ,128 ,189 ,146 ,35 ,51 ,206 ,62 ,8 ,117 ,61} ;
	//cin >> a >> b;
	unordered_set <string> comp;
	int count = 0;
	for (int i = 0; i < 64; i++)
	{
		string r = to_string(list[i]);
		unordered_set<string>::const_iterator got = comp.find (r);
		if(got == comp.end()) {
			//int x = myXOR(b, i);
			int x = (std::stoi(b, 0, 16) ^ std::stoi(r, 0, 16));
			//int y = std::stoi(x, 0, 10)
			cout << b << " XOR " << i << " = " << x << endl;
			comp.insert(to_string(x));
		}else {
			cout << "got " << *got << endl;
			count++;
		}
	}
	
	// while (a--)
	// {
	// 	string i;
	// 	cin >> i;
		
	// 	unordered_set<string>::const_iterator got = comp.find (i);
	// 	if(got == comp.end()) {
	// 		//int x = myXOR(b, i);
	// 		int x = (std::stoi(b, 0, 16) ^ std::stoi(i, 0, 16));
	// 		//int y = std::stoi(x, 0, 10)
	// 		cout << b << " XOR " << i << " = " << x << endl;
	// 		comp.insert(to_string(x));
	// 	}else {
	// 		cout << "got " << *got << endl;
	// 		count++;
	// 	}
	// }
	
	cout << "count " << count;
}

