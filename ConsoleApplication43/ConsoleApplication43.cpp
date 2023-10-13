#include <iostream>
#include "Payment.h"

using namespace std;

int main() {

	Payment a;
	a.Input();

	cout << "Accrued amount: ";
	cout << a.CalculateAccruedAmount() << endl;

	cout << "Withheld amount: ";
	cout << a.CalculateAmountWithheld() << endl;

	cout << "Net salary: ";
	cout << a.SumNetSalary() << endl;

	cout << "Service length: ";
	cout << a.CalculateLengthOfService() << endl;

	return 0;
}
