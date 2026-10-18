//Abdullah Atiq L1F26BSCS0282
#include<iostream>
using namespace std;
int main()
{
	int age = 0, creditHours = 0, feePerCreditHour = 0;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Credit Hours: ";
	cin >> creditHours;
	cout << "Enter Fee Per Credit Hour: ";
	cin >> feePerCreditHour;
	cout << "Total Fee: " << creditHours * feePerCreditHour << endl << "Fee After Discount: " << creditHours * feePerCreditHour - 2000 << endl;
		return 0;
}
/*
All answers are same with every method
If we write 19.8, there is a glitch and code completed with outcome value of 0
*/