//File I/O
//William Komer
//7-8-15

#include <iostream>
#include <fstream>
#include <string>	

using std::cout; using std::cin; using std::endl; using std::string; using std::ifstream; using std::ofstream;

void numSpell(int &dollars, string &cents);


int main(){
	ifstream fin;
	ofstream fout;

	string date, fName, lName, cents, payee;
	int dollars;

	string filename = "database.txt";
	fin.open(filename.c_str());
	string trashBag;//used to store the garbage i dont need from the file.
	for (int i = 0; i <= 13; ++i){
		switch (i){
		case 2:
			fin >> trashBag;
			fin >> date;
			break;
		case 4:
			fin >> trashBag;
			fin >> fName;
			break;
		case 5:
			fin >> lName;
			fin >> trashBag;//Gets the next piece that i would not need
			break;
		case 8:
			fin >> trashBag;
			fin >> dollars;
			break;
		case 10:
			fin >> trashBag;
			fin >> cents;
			break;
		case 12:
			fin >> trashBag;
			fin >> payee;
			break;
		case 13:
			string temp;
			fin >> temp;
			payee += temp;
			break;
		}
	}
	fin.close();//closes database.
	//opens check.txt
	filename = "check.txt";
	fin.open(filename.c_str());
	//line 1
	fout << fName << " " << lName << "\t\t\t" << date << endl;
	//line 2
	fout<< "pay to: " << payee << "\t\t\t$" << dollars << "." << cents << endl;
	//line 3
	numSpell(dollars, cents);

	fin.close();
}

void numSpell(int& dollars, string &cents){
	int one = dollars / 10;
	int two = dollars % 10;
	ofstream fout;

	if (one != 1){
		switch (one){
		case 2:
			fout << "Twenty ";
			break;
		case 3:
			fout << "Thirty ";
			break;
		case 4:
			fout << "Forty ";
			break;
		case 5:
			fout << "Fifty ";
			break;
		case 6:
			fout << "Sixty ";
			break;
		case 7:
			fout << "Seventy ";
			break;
		case 8:
			fout << "Eighty ";
			break;
		case 9:
			fout << "Ninety ";
			break;
		default:
			break;
		}
		//switch statement for singles and second numbers
		switch (two){
		case 1:
			fout << "One";
			break;
		case 2:
			fout << "Two";
			break;
		case 3:
			fout << "Three";
			break;
		case 4:
			fout << "Four";
			break;
		case 5:
			fout << "Five";
			break;
		case 6:
			fout << "Six";
			break;
		case 7:
			fout << "Seven";
			break;
		case 8:
			fout << "Eight";
			break;
		case 9:
			fout << "Nine";
			break;
		default:
			"Zero";
			break;
		}

		fout << " and " << cents << "/100\t\tdollars" << endl;
	}

	//If statements for tens
	if (one == 1){
		switch (two){
		case 1:
			fout << "Eleven";
			break;
		case 2:
			fout << "Twelve";
			break;
		case 3:
			fout << "Thirteen";
			break;
		case 4:
			fout << "Fourteen";
			break;
		case 5:
			fout << "Fifteen";
			break;
		case 6:
			fout << "Sixteen";
			break;
		case 7:
			fout << "Seventeen";
			break;
		case 8:
			fout << "Eighteen";
			break;
		case 9:
			fout << "Nineteen";
			break;
		default:
			fout << "Ten";
			break;
		}
		fout << " and " << cents << "/100\t\tdollars" << endl;
	}

}