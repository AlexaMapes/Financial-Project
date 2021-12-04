#include "OutputFunctions.h"
#include <iostream>
#include <stdexcept>
using namespace std;

// Output top of start menu
void startMenu() {
	cout << "****************************************" << endl;
	cout << "**************DATA INPUT****************" << endl;
}

// Output top of finance report without monthly deposits
void financeOutput() {
	cout << "     Balance and Interest Without Additional Monthly Deposits     " << endl;
	cout << "==================================================================" << endl;
	cout << "  Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "------------------------------------------------------------------" << endl;
}

// Output top of finance report with monthly deposits
void financeOutputWD() {
	cout << "     Balance and Interest With Additional Monthly Deposits        " << endl;
	cout << "==================================================================" << endl;
	cout << "  Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "------------------------------------------------------------------" << endl;
}

// Get initial investment amount from user
double getInitialInvestment() {
	double m_initialInvestment;

	// Get data from user
	cout << "Initial Investment Amount: $";
	cin >> m_initialInvestment;
	cout << endl;

	// Check for negative value
	if (m_initialInvestment < 0) {
		throw runtime_error("Invalid Initial Investment");
	}

	return m_initialInvestment;
}

// Get monthly deposit amount from user
double getMonthlyDeposit() {
	double m_monthlyDeposit;

	// Get data from user
	cout << "Monthly Deposit Amount: $";
	cin >> m_monthlyDeposit;
	cout << endl;

	// Check for negative value
	if (m_monthlyDeposit < 0) {
		throw runtime_error("Invalid Monthly Deposit");
	}

	return m_monthlyDeposit;
}

// Get annual interest rate from user
double getAnnualInt() {
	double m_annualInt;

	// Get data from user
	cout << "Annual Interest Rate (%): ";
	cin >> m_annualInt;
	cout << endl;

	// Check for negative value or percent greater than 100
	if (m_annualInt < 0 || m_annualInt > 100) {
		throw runtime_error("Invalid Interest Rate");
	}

	return m_annualInt;

}

// Get number of years from user
int getNumYears() {
	int m_numYears;

	// Get data from user
	cout << "Number of Years: ";
	cin >> m_numYears;
	cout << endl;


	// Check for negative value
	if (m_numYears < 0) {
		throw runtime_error("Invalid Number Of Years");
	}

	return m_numYears;
}

// Check if user would like to repeat or exit
char repeatCalculations() {
	char m_contSelection = 'a';

	while (m_contSelection != 'n' && m_contSelection != 'y') {
		cout << "Would you like to try again?" << endl;
		cout << "Enter 'y' for yes or 'n' for no" << endl;
		cin >> m_contSelection;
	}

	return m_contSelection;
}
