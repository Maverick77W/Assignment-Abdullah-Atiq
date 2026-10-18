//Abdullah Atiq L1F26BSCS0282
#include<iostream>
using namespace std;
int main()
{
	int rollNo = 1045, semester = 1, totalFee = 45000, feePaid = 20000;
	char section = 'B';
	float cgpa = 3.5;
	cout << "Roll No: "<<rollNo << endl;
	cout << "Semester: " << semester << endl;
	cout << "Section: " << section << endl;
	cout << "CGPA: " << cgpa << endl;
	cout << "Total Fee:" << totalFee << endl;
	cout << "Fee Paid: " << feePaid << endl;
	cout << "Semester: " << semester + 1 << endl;
	feePaid = feePaid + 5000;
	cout << "Fee Paid: " << feePaid << endl;
	int remainingFee = totalFee - feePaid;
	cout << "Remaining Fee: " << remainingFee << endl;
	cout << "Percentage Paid: " << (feePaid * 100) / totalFee << endl;
	return 0;
}
    /*
	2ndYear        Invalid
	student_name   Valid
	total- marks   Invalid
	_fee           Valid
	Roll No        Invalid
	marks2         Valid
	It is not safe to just initialize a variable as it gives a syntax error.
	*/