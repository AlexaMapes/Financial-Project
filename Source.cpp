#include <iostream>
#include<conio.h>
#include <stdexcept>
#include "FinancialFunctions.h"
#include "OutputFunctions.h"
using namespace std;

int main() {
	double initialInvestment;
	double monthlyDeposit;
	double annualInt;
	int numYears;
	char contSelection = 'a';
	
	while (contSelection != 'n') {
		try {
			// Output start menu and get data from user
			startMenu();
			initialInvestment = getInitialInvestment();
			monthlyDeposit = getMonthlyDeposit();
			annualInt = getAnnualInt();
			numYears = getNumYears();
			cout << endl << "Press Any Key To Continue" << endl << endl;
			_getch();

			// Calculate yearly financial info without monthly deposit
			financeOutput();
			calcYearlyData(numYears, annualInt, initialInvestment);

			// Calculate yearly financial info WITH monthly deposit
			financeOutputWD();
			calcYearlyDataWD(numYears, annualInt, monthlyDeposit, initialInvestment);
		}

		// Handle exceptions such as negative input
		catch (runtime_error& excpt) {
			cout << excpt.what() << endl;
			cout << "Cannot compute investment information." << endl;
		}

		// Check if user would like to continue
		cout << endl << endl;
		contSelection = repeatCalculations();
		cout << endl << endl;

	}

	return 0;
}