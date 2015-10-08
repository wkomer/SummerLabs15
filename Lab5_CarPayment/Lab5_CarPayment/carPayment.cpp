// calculates car payment based upon users credit credit
// William Komer 
// 6-28-15

#include <iostream>
#include <cmath>

using std::endl; using std::cout; using std::cin;

//returns the custmers monthly interest rate based upon the entered credit score.
double interestRate(int);

//returns the monthly car payment based upon the interest rate and price and monthly payments period
double monthlyPayment(double, double, int);

//Returns the final cost of the car incuding the loan interest
double finalCost(double, double);

int main() {
	//declares variables, amount, Ltime(Loan Time), Credit Score
	double amount;
	int ltime, cscore;

	cout << "What is the price of your new car? ";
	cin >> amount;
	cout << "Enter in the term of the loan: Number of monthly payments? ";
	cin >> ltime;
	cout << "Enter in your credit score: Number between 350-850? ";
	cin >> cscore;	

	//monthlyPayment(interestRate(cscore),amount,ltime);

	finalCost(monthlyPayment(interestRate(cscore),amount,ltime), ltime);




}


//returns the customers interest rate based upon the
//formal parameter of customers credit score
double interestRate(int cscore) {
	//States the Interest Rate as a constant.
	const double excelIR = 0.045 / 12;
	const double goodIR = 0.082 / 12;
	const double lowIR = 0.129 / 12;
	const double poorIR = 0.187 / 12;

	if (cscore <= 449)
		return poorIR;
	else if (cscore >= 450 || cscore <= 549)
		return lowIR;
	else if (cscore >= 550 || cscore <= 659)
		return goodIR;
	else if (cscore >= 660 || cscore <= 850)
		return excelIR;
}

double monthlyPayment(double interestRate, double amount, int ltime){
	double temp, temp1;
	temp = interestRate*amount*pow(1 + interestRate, ltime);
	temp1 = pow(1 + interestRate, ltime) - 1;
	double mpay = temp / temp1;
	return mpay;
}

double finalCost(double monthlyPayment, double ltime){
	double fcost = monthlyPayment * ltime;
	cout << "Your Monthly Payment is $" << monthlyPayment << endl;
	cout << "The Total price of the car is $" << fcost << endl;
	return fcost;
}