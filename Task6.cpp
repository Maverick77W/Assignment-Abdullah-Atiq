//Abdullah Atiq L1F26BSCS0282
#include<iostream>
using namespace std;
int main()
{
	int price = 0, quantity = 0;
	cout << "Enter Price: ";
	cin >> price;
	cout << "Enter Quantity: ";
	cin >> quantity;
	int total = price * quantity;
	cout << "Total: " << total << endl;
	int tax = total * 5 / 100;
	cout << "Tax: "<<tax << endl;
	int grandTotal = total + tax;
	cout << "Grand Total: " << grandTotal << endl;
	return 0;
}
//A calculator gives 34.65 tax while program gives 34 for 99 price and 7 quantity because program uses int value and it is never be in points.