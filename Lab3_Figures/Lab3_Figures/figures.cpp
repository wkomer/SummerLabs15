//Attempts to make figures with for loops
//William Komer
//6-18-15

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){
	cout << "Enter a number to make the figures with." << endl;
	int num;
	int count = 0;
	cin >> num;

	// Solid Square
	for (int r = 0; r < num; r++){
		for (int c=0; c <num; c++)
			cout << "*";
		cout << endl;
	}

	//for space between the figure
	cout << endl;

	//Triangle Small Top Left
	for (int r = 0; r < num; r++){
		count++; 
		for (int c = 0; c < count; c++){
			cout << "*";
		}
		cout << endl;
	}

	//for space between the figure/resets count
	cout << endl;
	count = num;
	count--;
	//Triangle Small Top Right
	for (int r = 0; r < num; r++){
		
		for (int c = 0; c < num; c++){
			if (c < count)
				cout << " ";
			else
				cout << "*";
		}

		count--;
		cout << endl;
	}

	//for space between the figure
	cout << endl;

	//Hollow Square
	for (int r = 0; r < num; r++){
		for (int c = 0; c < num; c++){
			if (r == 0)
				cout << "*";
			else if (r == num-1)
				cout << "*";
			else if (c == 0)
				cout << "*";
			else if (c == num-1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	
	
	//for space between the figure
	cout << endl;




}
