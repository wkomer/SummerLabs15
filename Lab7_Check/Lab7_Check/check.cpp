//Writes a Check from strings
//William Komer
//7-8-15

#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

void numSpell(int &dollars, string &cents);
void prompt(string &date, string &fName, string &lName, string &payee, int &dollars, string &cents);
void write(string &date, string &fName, string &lName, string &payee, int &dollars, string &cents);
int main(){
	string date, fName, lName, payee, cents;
	int dollars = 0;
	//asks user for info.
	prompt(date, fName, lName, payee, dollars, cents);
	write(date, fName, lName, payee, dollars, cents);
	
}

void prompt(string &date, string &fName, string &lName, string &payee, int &dollars, string &cents){
	cout << "Date ex 2/2/12: ";
	cin >> date;
	cout << "Enter your Name: ";
	cin >> fName >> lName;
	cout << "Amount, Dollars: ";
	cin >> dollars;
	cout << "cents: ";
	cin >> cents;
	cout << "Payee: ";
	cin >> payee;
}

void numSpell(int& dollars, string &cents){
	int one = dollars / 10;
	int two = dollars % 10;


	if (one != 1){
		switch (one){
		case 2:
			cout << "Twenty ";
			break;
		case 3:
			cout << "Thirty ";
			break;
		case 4:
			cout << "Forty ";
			break;
		case 5:
			cout << "Fifty ";
			break;
		case 6:
			cout << "Sixty ";
			break;
		case 7:
			cout << "Seventy ";
			break;
		case 8:
			cout << "Eighty ";
			break;
		case 9:
			cout << "Ninety ";
			break;
		default:
			break;
		}
		//switch statement for singles and second numbers
		switch (two){
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";
			break;
		case 3:
			cout << "Three";
			break;
		case 4:
			cout << "Four";
			break;
		case 5:
			cout << "Five";
			break;
		case 6:
			cout << "Six";
			break;
		case 7:
			cout << "Seven";
			break;
		case 8:
			cout << "Eight";
			break;
		case 9:
			cout << "Nine";
			break;
		default:
			"Zero";
			break;
		}
		
		cout << " and " << cents << "/100\t\tdollars" << endl;
	}

	//If statements for tens
	if (one == 1){
		switch (two){
		case 1:
			cout << "Eleven";
			break;
		case 2:
			cout << "Twelve";
			break;
		case 3:
			cout << "Thirteen";
			break;
		case 4:
			cout << "Fourteen";
			break;
		case 5:
			cout << "Fifteen";
			break;
		case 6:
			cout << "Sixteen";
			break;
		case 7:
			cout << "Seventeen";
			break;
		case 8:
			cout << "Eighteen";
			break;
		case 9:
			cout << "Nineteen";
			break;
		default:
			cout << "Ten";
			break;
		}
		cout << " and " << cents << "/100\t\tdollars" << endl;
	}

}

void write(string &date, string &fName, string &lName, string &payee, int &dollars, string &cents){
	cout << "your check:\n" << endl;
	//Line 1 of check
	cout << fName << " " << lName << "\t\t\t" << date << endl;
	//Line 2 of check
	cout << "pay to: " << payee << "\t\t\t$" << dollars << "." << cents << endl;
	//Line 3 of check
	numSpell(dollars,cents);

}