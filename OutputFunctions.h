#ifndef PROJECTTWO_PROJECTTWO_OUTPUTFUNCTIONS_H_
#define PROJECTTWO_PROJECTTWO_OUTPUTFUNCTIONS_H_

// Output top of start menu
void startMenu();

// Output top of finance report without monthly deposits
void financeOutput();

// Output top of finance report with monthly deposits
void financeOutputWD();

// Get initial investment amount from user
double getInitialInvestment();

// Get monthly deposit amount from user
double getMonthlyDeposit();

// Get annual interest amount from user
double getAnnualInt();

// Get number of years from user
int getNumYears();

// Check if user wants to repeat or exit
char repeatCalculations();

#endif