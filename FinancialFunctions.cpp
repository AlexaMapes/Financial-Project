#include "FinancialFunctions.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

// Calculate yearly financial info without monthly deposit
void calcYearlyData(int t_numYears, double t_annualInt, double t_initialInvestment) {
	int const NUM_MONTHS = 12;
	int currMonth;
	int currYear = 1;
	double yearEndInt = 0;
	double monthEndInt = 0;
	double currBal = t_initialInvestment;

	// Loops numYears times
	while (currYear <= t_numYears) {
		// Reset current month and total year's interest at start of new year
		currMonth = 1;
		yearEndInt = 0;
		// Loops 12 times, once for each month of the year
		while (currMonth <= NUM_MONTHS) {
			// Calculate interest earned
			monthEndInt = currBal * ((t_annualInt / 100.0) / 12.0);
			
			// Add monthly interest earned to yearly interest earned
			yearEndInt = yearEndInt + monthEndInt;
			
			// Add monthly interest earned to total balance
			currBal = currBal + monthEndInt;
			
			// Increment month by 1
			++currMonth;
		}
		// Output year's financial information
		cout << fixed << setprecision(2);
		cout << "  " << left << setw(4) << currYear << "        $" << left << setw(25) << currBal << "$" << yearEndInt << endl;
		
		// Increment year by 1
		++currYear;
	}

	cout << endl << endl;

}

void calcYearlyDataWD(int t_numYears, double t_annualInt, double t_monthlyDeposit, double t_initialInvestment) {
	int const NUM_MONTHS = 12;
	int currMonth;
	int currYear = 1;
	double yearEndInt = 0;
	double monthEndInt = 0;
	double currBal = t_initialInvestment;

	// Loops numYears times
	while (currYear <= t_numYears) {
		// Reset current month and total year's interest at start of new year
		currMonth = 1;
		yearEndInt = 0;
		// Loops 12 times, once for each month of the year
		while (currMonth <= NUM_MONTHS) {
			// Calculate interest earned
			monthEndInt = (currBal + t_monthlyDeposit) * ((t_annualInt / 100.0) / 12.0);
			
			// Add monthly interest earned to yearly interest earned
			yearEndInt = yearEndInt + monthEndInt;
			
			// Add monthly interest earned to total balance and additional monthly deposit
			currBal = currBal + monthEndInt + t_monthlyDeposit;
			
			// Increment month by 1
			++currMonth;
		}
		
		// Output year's financial information
		cout << fixed << setprecision(2);
		cout << "  " << left << setw(4) << currYear << "        $" << left << setw(25) << currBal << "$" << yearEndInt << endl;
		
		// Increment year by 1
		++currYear;
	}
}
