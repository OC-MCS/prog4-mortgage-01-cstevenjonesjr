#include "Mortgage.h"
#include <iostream>
#include <cmath>

using namespace std;

Mortgage::Mortgage()
{
	loan = 0;
	interestRate = 0;
	years = 0;
}
//This sets the Loan equal to the provate function "loan"
void Mortgage::setLoan(double Loan)
{
	loan = Loan;
} 

void Mortgage::setInterestRate(float rate)
{
	interestRate = rate;
}

void Mortgage::setYears(int Years)
{
	years = Years;
}
//This will calulate the term of the loan 
double Mortgage::getTerm()
{
	double term;
	term = pow(1 + (interestRate / 12), 12 * years);
	return term;
}
//This will calculate the monthly payment that the loanee must pay
double Mortgage::getMonthlyPayment()
{
	double payment;
	payment = ((loan*(interestRate / 12)*getTerm()) / (getTerm() - 1));
	return payment;
}
//This will calculate the total amount the loanee will pay over the term of the loan
double Mortgage::getPaymentTotal()
{
	double total;
	total = (getMonthlyPayment() * 12 * years);
	return total;
}
