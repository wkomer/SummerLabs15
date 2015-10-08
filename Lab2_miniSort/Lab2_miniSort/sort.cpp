// This program was originally written
// by Mikhail Nesterenko.  
// 9/3/2009
//
// Revised by Dianne Foreback
// Changed to sort in descending order.
// Modified variable names.
// 6/13/2015
// The program attempts to sort three integers
// in descending order, it is incomplete.
//	
//Finsihed By William Komer
//Added a Large/small If statement
//6-16-15
//Is Completed

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){

	// inputs the numbers
	cout << "Enter three numbers: ";
	int large, medium, small;
	cin >> large >> medium >> small;

	int tmp;
	
	// orders small and large
	if (large < small){
		tmp = large;
		large = small;
		small = tmp;
	}

	// orders large and medium
	if (large < medium){
		tmp = large;
		large = medium;
		medium = tmp;
	}

	// orders medium and small
	if (medium < small){
		tmp = medium;
		medium = small;
		small = tmp;
	}

	

	// outputs the sorted numbers
	cout << "The sorted numbers are: ";
	cout << large << " " << medium << " " << small << endl;
}