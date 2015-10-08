//Attempts to have a user enter digits and print the combination of the two digits
//Willaim Komer
//6-16-15

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){
	//asks user to enter numbers
	cout << "enter in two digits in which to print the combination ex. 1 9 -> nineteen\n";
	int one, two;
	//user enters Numbers
	cin >> one >> two;
	
	//If first doesnt = 1
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
			cout << "One\n";
			break;
		case 2:
			cout << "Two\n";
			break;
		case 3:
			cout << "Three\n";
			break;
		case 4:
			cout << "Four\n";
			break;
		case 5:
			cout << "Five\n";
			break;
		case 6:
			cout << "Six\n";
			break;
		case 7:
			cout << "Seven\n";
			break;
		case 8:
			cout << "Eight\n";
			break;
		case 9:
			cout << "Nine\n";
			break;
		default:
			break;
		}
	}

	//If statements for tens
	if (one == 1){
		switch (two){
		case 1:
			cout << "Eleven\n";
			break;
		case 2:
			cout << "Twelve\n";
			break;
		case 3:
			cout << "Thirteen\n";
			break;
		case 4:
			cout << "Fourteen\n";
			break;
		case 5:
			cout << "Fifteen\n";
			break;
		case 6:
			cout << "Sixteen\n";
			break;
		case 7:
			cout << "Seventeen\n";
			break;
		case 8:
			cout << "Eighteen\n";
			break;
		case 9:
			cout << "Nineteen\n";
			break;
		default:
			cout << "Ten\n";
			break;
		}
	}
}