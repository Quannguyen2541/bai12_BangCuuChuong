// bai12_BangCuuChuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "Bang cuu chuong\n";
	for (int a = 1; a < 11; a++)
	{
		for (int so = 2; so < 10; so++)
		{
			cout << so << "x" << a << "=" << so * a << "\t";
		}
		cout << endl;
	}
	return 0;
}
	
	
	
	