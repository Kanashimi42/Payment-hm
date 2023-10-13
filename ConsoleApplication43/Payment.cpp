#include "Payment.h"

using namespace std;

Payment::Payment() {
    firstName = "";
    lastName = "";
    surName = "";

    yearOfEntryToWork = 0;
    salary = 0;
    bonusPercentage = 0;
    numberOfDaysWorkedPerMonth = 0;
    numberOfWorkingDaysPerMonth = 0;
    accruedAmount = 0;
    amountWithheld = 0;
}

Payment::Payment(string name, string surname, string str, int workyear, int s, float bp, int nodwpm, int workingDays) {
    firstName = name;
    lastName = surname;
    surName = str;

    yearOfEntryToWork = workyear;
    salary = s;
    bonusPercentage = bp;
    numberOfDaysWorkedPerMonth = nodwpm;
    numberOfWorkingDaysPerMonth = workingDays;
    accruedAmount = 0;
    amountWithheld = 0;
}

void Payment::Input() {
    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter middle name: ";
    cin >> surName;

    cout << "Enter year of entry to work: ";
    cin >> yearOfEntryToWork;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter bonus percentage (if any): ";
    cin >> bonusPercentage;

    cout << "Number of days worked in the current month: ";
    cin >> numberOfDaysWorkedPerMonth;

    cout << "Number of working days: ";
    cin >> numberOfWorkingDaysPerMonth;
}

void Payment::Print() const {
    cout << "Last Name: " << lastName << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Middle Name: " << surName << endl;
    cout << "Year of Entry: " << yearOfEntryToWork << endl;
    cout << "Salary: " << salary << endl;
    cout << "Bonus Percentage: " << bonusPercentage << endl;
    cout << "Number of days worked in the current month: " << numberOfDaysWorkedPerMonth << endl;
    cout << "Number of working days: " << numberOfWorkingDaysPerMonth << endl;
    cout << "Accrued Amount: " << accruedAmount << endl;
    cout << "Amount Withheld: " << amountWithheld << endl;
}

float Payment::CalculateAccruedAmount() {
    accruedAmount = salary + (salary * bonusPercentage / 100.0);
    return accruedAmount;
}

float Payment::CalculateAmountWithheld() {
    int incomeTax = 13;

    amountWithheld = (accruedAmount * (incomeTax / 100.0)) + (salary * 1 / 100.0);
    return amountWithheld;
}

float Payment::SumNetSalary() {
    return accruedAmount - amountWithheld;
}

int Payment::CalculateLengthOfService() {
    int thisYear;
    int incomeTax = 13;

    do {
        cout << "Enter the current year: ";
        cin >> thisYear;
        if (thisYear < yearOfEntryToWork) {
            cout << "You entered an incorrect year!" << endl;
        }
    } while (thisYear < yearOfEntryToWork);

    return thisYear - yearOfEntryToWork;
}

string Payment::GetFirstName() const {
    return firstName;
}
string Payment::GetLastName() const {
    return lastName;
}
string Payment::GetSurName() const {
    return surName;
}

int Payment::GetSalary() const {
    return salary;
}
int Payment::GetYearOfEntryToWork() const {
    return yearOfEntryToWork;
}
float Payment::GetBonusPercentage() const {
    return bonusPercentage;
}
int Payment::GetNumberOfDaysWorkedPerMonth() const {
    return numberOfDaysWorkedPerMonth;
}
int Payment::GetNumberOfWorkingDaysPerMonth() const {
    return numberOfWorkingDaysPerMonth;
}
float Payment::GetAccruedAmount() const {
    return accruedAmount;
}
float Payment::GetAmountWithheld() const {
    return amountWithheld;
}

void Payment::SetFirstName(string fn) {
    firstName = fn;
}
void Payment::SetLastName(string ln) {
    lastName = ln;
}
void Payment::SetSurName(string sn) {
    surName = sn;
}

void Payment::SetSalary(int s) {
    salary = s;
}
void Payment::SetYearOfEntryToWork(int yoetw) {
    yearOfEntryToWork = yoetw;
}
void Payment::SetBonusPercentage(float bp) {
    bonusPercentage = bp;
}
void Payment::SetNumberOfDaysWorkedPerMonth(int nodwpm) {
    numberOfDaysWorkedPerMonth = nodwpm;
}
void Payment::SetNumberOfWorkingDaysPerMonth(int nowdpm) {
    numberOfWorkingDaysPerMonth = nowdpm;
}
void Payment::SetAccruedAmount(float aa) {
    accruedAmount = aa;
}
void Payment::SetAmountWithheld(float aw) {
    amountWithheld = aw;
}
