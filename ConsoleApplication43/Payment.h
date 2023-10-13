#pragma once
#include <iostream>
#include <string>

using namespace std;

class Payment {
	string firstName;
	string lastName;
	string surName;
	int salary;
	int yearOfEntryToWork;
	float bonusPercentage;
	int incomeTax;
	int numberOfDaysWorkedPerMonth;
	int numberOfWorkingDaysPerMonth;
	int accruedAmount;
	int amountWithheld;
public:
	Payment();
	Payment(string, string, string, int, int, float, int, int);

	void Input();
	void Print() const;
	float SumNetSalary();
	int CalculateLengthOfService();
	float CalculateAccruedAmount();
	float CalculateAmountWithheld();


	string GetFirstName() const;
	string GetLastName() const;
	string GetSurName() const;


	int GetSalary() const;
	int GetYearOfEntryToWork() const;
	float GetBonusPercentage() const;
	int GetIncomeTax() const;
	int GetNumberOfDaysWorkedPerMonth() const;
	int GetNumberOfWorkingDaysPerMonth() const;
	float GetAccruedAmount() const;
	float GetAmountWithheld() const;
	void SetFirstName(string);
	void SetLastName(string);
	void SetSurName(string);



	void SetSalary(int);
	void SetYearOfEntryToWork(int);
	void SetBonusPercentage(float);
	void SetAccruedAmount(float);
	void SetNumberOfDaysWorkedPerMonth(int);
	void SetNumberOfWorkingDaysPerMonth(int);
	void SetAmountWithheld(float);
};
