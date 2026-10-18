//Abdullah Atiq L1F26BSCS0282
#include<iostream>
using namespace std;
int main()
{
	int temp = 0;
	cout << "Enter Temperature in Celsius: ";
	cin >> temp;
	cout << "Celsius " << temp << " gives Fahrenheit: " << temp * 9 / 5 + 32;
	return 0;
}
//For value 37, calculator gives 98.6 but prgram gives 98 because we take values in int in this program.