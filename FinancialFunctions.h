#ifndef PROJECTTWO_PROJECTTWO_FINANCIALFUNCTIONS_H_
#define PROJECTTWO_PROJECTTWO_FINANCIALFUNCTIONS_H_

// Calculate yearly financial data without monthly deposit
void calcYearlyData(int t_numYears, double t_annualInt, double t_initialInvestment);

// Calculate yearly financial date WITH monthly deposit
void calcYearlyDataWD(int t_numYears, double t_annualInt, double t_monthlyDeposit, double t_initialInvestment);

#endif