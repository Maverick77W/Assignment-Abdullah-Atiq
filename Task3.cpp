//Abdullah Atiq L1F26BSCS0282
#include<iostream>
using namespace std;
int main()
{
	cout << "Expression 1 = " << 10 + 5 * 2 << endl;
	cout << "Expression 2 = " << (10 + 5) * 2 << endl;
	//Expression 3 evaluated from left to right
	cout << "Expression 3 = " << 20 - 5 - 3 << endl;
	cout << "Expression 4 = " << 100 / 7 << endl;
	cout << "Expression 5 = " << 100 % 7 << endl;
	cout << "Expression 6 = " << 2 * 3 + 8 / 4 - 1 << endl;
	//Adding brackets so it can become 8
	cout << "Expression 6 = " << 2 * 3 + 8 / (4 - 1);
	return 0;
}