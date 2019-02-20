#pragma once
// header file for Mortgage class
class Mortgage
{
	private:
		double loan;
		double interestRate;
		int years;
	public:
		Mortgage();
		void setLoan(double);
		void setInterestRate(float);
		void setYears(int);
		double getPaymentTotal();
		double getTerm();
		double getMonthlyPayment();

		
		
};

