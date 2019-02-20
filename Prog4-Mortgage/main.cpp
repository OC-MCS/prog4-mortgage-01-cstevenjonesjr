//=============================
//Name: Steven Jones
//Date: February 20th, 2019
//Description: Assignment 4 - Mortgage Calculator
//=============================

#include "Mortgage.h" // Including the mortgage class
#include <iostream>
using namespace std;

int main()
{
	Mortgage test; //Creating an instance of Mortgage
	double Loan;
	float rate;
	int Years;
	cout << "Welcome to the Mortgage Calculator" << endl;
	cout << "Please enter the loan amount: $";
	cin >> Loan;
	while (Loan < 0) //Verifying the input is greater than 0
	{
		cout << "Invalid input, please re-try: ";
		cin >> Loan;
	}
	test.setLoan(Loan);
	cout << "Please enter the Interest Rate on the loan: ";
	cin >> rate;
	while (rate < 0) //Verifying the input is greater than 0
	{
		cout << "Invalid input, please re-try: ";
		cin >> rate;
	}
	test.setInterestRate(rate);
	cout << "Please enter the time in years of the loan: ";
	cin >> Years;
	while (Years < 0) //Verifying the input is greater than 0
	{
		cout << "Invalid input, please re-try: ";
		cin >> Years;
	}
	test.setYears(Years);
	cout << "Calculating monthly payment..." << endl;
	cout << "Monthly Payment: $" << test.getMonthlyPayment() << endl;
	cout << "Total amount paid over loan : $" << test.getPaymentTotal() << endl;
	return 0;
}

